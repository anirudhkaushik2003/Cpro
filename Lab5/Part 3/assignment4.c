#include <stdio.h>
#include <float.h>
#include <time.h>
#include <stdlib.h>

#define N 1000000.00

int main()
{
    float x = 0, y = 0, prob = 0;
    int i,j, a = 0;
    printf("sample number of points(x axis) vs probability graph(y axis)\n");
    srand((unsigned)time(NULL));
    for (j = 1; j < 11; j++)
    {
        a = 0;
        for (i = 0; i < j * N; i++)
        {
            x = (float)rand() / (float)(RAND_MAX / 1.0);
            y = (float)rand() / (float)(RAND_MAX / 1.0);

            if ((x * x) + (y * y) <= 1)
                a++;
            else
                continue;
        }
        prob = 4 * (a / (j*N));
        printf("%.0f,%f\n", (j*N),prob);
    }
}
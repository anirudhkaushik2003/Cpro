#include <stdio.h>
#include <float.h>
int main()
{
    float a[5][5], b,c,d,e;
    int i, j;
    printf("Enter 5 quiz marks for student 1: \n");
    for (j = 0; j < 5; j++)
    {
        scanf("%f", &a[0][j]);
    }
    printf("Enter 5 quiz marks for student 2: \n");
    for (j = 0; j < 5; j++)
    {
        scanf("%f", &a[1][j]);
    }
    printf("Enter 5 quiz marks for student 3: \n");
    for (j = 0; j < 5; j++)
    {
        scanf("%f", &a[2][j]);
    }
    printf("Enter 5 quiz marks for student 4: \n");
    for (j = 0; j < 5; j++)
    {
        scanf("%f", &a[3][j]);
    }
    printf("Enter 5 quiz marks for student 5: \n");
    for (j = 0; j < 5; j++)
    {
        scanf("%f", &a[4][j]);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            b += a[i][j];
        }
        c = b/5.0f;
        printf(" Student %d scores: total: %.2f | average: %.2f\n",i+1,b,c);
        b = 0;
    }
    printf("\n");
    b = 0;
     
    for (j = 0; j < 5; j++)
    {
        d = FLT_MIN;
        e = FLT_MAX;
        for (i = 0; i < 5; i++)
        {
            if (a[i][j] > d) d = a[i][j];
            if (a[i][j] < e) e = a[i][j];
            b += a[i][j];
        }
        c = b/5.0f;
        printf(" Quiz %d scores: average score: %.2f | highest:%.2f | lowest: %.2f \n",j+1,c,d,e);
        b = 0;
    }
    printf("\n");
}
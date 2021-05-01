#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100000
int main()
{
    int i;
    srand((unsigned) time(NULL));
    printf("%d\n",N);
    for(i = 0;i < N;i++)
    {
        printf("%d\n",rand()%9999999);
    }
}
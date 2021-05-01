#include <stdio.h>
#include <ctype.h>
int main()
{
    int i, n;
    long long int a[10] = {0};
    char b[1000];
    for (i = 0; i < 1000; i++)
    {
        b[i] = getchar();
        if (b[i] == '\n')
            break;
    }
    for (i = 0; i < 1000; i++)
    {
        if (b[i] >= '0' && b[i] <= '9')
        {
            n = b[i] - '0';
            a[n]++;
        }
        else
            break;
    }

    for (i = 0; i <= 9; i++)
    {
        printf(" %d ", i);
    }
    printf("\n");
    for (i = 0; i <= 9; i++)
    {
        printf(" %lld ", a[i]);
    }

    printf("\n");
}
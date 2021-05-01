#include <stdio.h>
int main()
{
    int a[10] = {0}, n, i;
    printf("Enter a number:");
    scanf("%d", &n);
    while (n > 0)
    {
        i = n % 10;
        a[i]++;
        n /= 10;
    }
    printf("Repeated digits:");
    for (i = 0; i <= 9; i++)
    {
        if (a[i] > 1)
            printf("%2d", i);
        else
            continue;
    }
    printf("\n");
}
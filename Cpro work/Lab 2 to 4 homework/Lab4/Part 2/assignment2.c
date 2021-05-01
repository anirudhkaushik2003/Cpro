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
    printf("Digit:      ");
    for (i = 0; i <= 9; i++)
    {
        printf("%4d",i);
    }
    printf("\n");
    printf("occurrences:");
    for (i = 0; i <= 9; i++)
    {
        printf("%4d",a[i]);
    }
    printf("\n");
    
}
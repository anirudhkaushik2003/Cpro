#include <stdio.h>
int main()
{
    int n, a, d, i;
    double b;
    printf("Enter an integer n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        d = 1;
        for (a = 1 , b = 0; d <= i; d++)
        {
            a = a * d;
            b = b + (1.0f/a);  
        }    
    }
    printf("e = %lf\n", b+1);
}
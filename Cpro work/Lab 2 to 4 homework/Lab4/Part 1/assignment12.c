#include <stdio.h>
int main()
{
    int a, d, i;
    double b,n,c;
    printf("Enter a number n:");
    scanf("%lf", &n);
    c = 100; 
    for (i = 1; c >= n; i++)
    {
        d = 1;
        for (a = 1 , b = 0; d <= i; d++)
        {
            a = a * d;
            c = (1.0f/a);
            b = b + (1.0f/a);  
        }    
    }
    printf("e = %lf\n", b+1);
}

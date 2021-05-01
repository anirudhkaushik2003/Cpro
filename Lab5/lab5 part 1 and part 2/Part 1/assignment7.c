#include <stdio.h>
int power(int x, int n)
{
    if (n % 2 == 0)
    {
        if (n == 0)
            return 1;
        else
        {
            n = n / 2;
            x = x * x;
            return x * power(x, n - 1);
        }
    }
    else
        return x * power(x, n - 1);
}
int main()
{
    int x, n;
    printf("Enter x and n separated by space(x^n):");
    scanf("%d %d", &x, &n);
    printf("%d\n", power(x, n));
}
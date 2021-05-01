#include <stdio.h>
int main()
{
    int a, b, c, r , d;
    printf("Enter two integers:");
    scanf("%d %d", &a, &b);
    if (a > b && a != 0 && b != 0)
    {
        c = (a % b);
        r = b;
    }
    else
    {
        if (b > a && a != 0 && b != 0)
        {
            c = (b % a);
            r = a;
        }
        else
        {
            if (a == 0)
            {
                printf("The GCD is:%d\n", b);
            }
            else
            {
                printf("The GCD is:%d\n", a);
            }
        }
    }
    if (c == 0)
    {
        if (a > b)
            printf("The GCD is: %d\n", b);
        else
            printf("The GCD is: %d\n", a);
    }
    else
    {
        while (c != 0)
        {
            d = r%c;
            r = c;
            c = d;

        }

        printf("The GCD is: %d\n", r);
    }
}
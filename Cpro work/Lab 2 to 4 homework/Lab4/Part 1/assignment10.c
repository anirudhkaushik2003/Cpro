#include <stdio.h>
int main()
{
    int a, b, c, d, e, f;
    d = a;
    e = b;
    f = c;
    do
    {
        printf("Enter date (mm/dd/yy)(0/0/0 to terminate):");
        scanf("%d/%d/%d", &a, &b, &c);
        if (f > c)
        {
            f = c;
            d = a;
            e = b;
        }
        else
        {
            if (f == c )
            {
                if (d > a && a != 0)
                {
                    d = a;
                    f = c;
                    e = b;
                }
            }
            else
            {
                if (d == a && a != 0)
                {
                    if (e > b && b != 0)
                    {
                        d = a;
                        f = c;
                        e = b;
                    }
                }
            }
        }                
    }while (a != 0 && b != 0);
    printf("The earliest date is:%d/%d/%d\n", d, e, f);
}
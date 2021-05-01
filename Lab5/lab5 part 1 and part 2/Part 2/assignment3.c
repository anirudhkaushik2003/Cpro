#include <stdio.h>
void reduce(int a, int b, int *f, int *g)
{
    int c, r, d;
    if (a == b)
    {
        *f = 1;
        *g = 1;
    }
    else
    {
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

                    r = b;
                }
                else
                {

                    r = a;
                }
            }
        }
        if (c == 0)
        {
            if (a > b)
            {

                r = b;
            }
            else
            {

                r = a;
            }
        }
        else
        {
            while (c != 0)
            {
                d = r % c;
                r = c;
                c = d;
            }
        }
        *f = a / r;
        *g = b / r;
    }
}
int main()
{
    int a, b, c, d;
    printf("Enter a fraction:");
    scanf("%d/%d", &a, &b);
    reduce(a, b, &c, &d);
    printf("In lowest terms: %d/%d\n", c, d);
}
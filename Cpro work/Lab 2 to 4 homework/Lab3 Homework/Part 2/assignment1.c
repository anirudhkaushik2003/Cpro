#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number(max 4 digits):");
    scanf("%d", &a);
    if (0 <= a&& a<= 9)
    {
        printf("The number %d has 1 digit\n", a);
    }
    else
    {
        if (10 <= a&& a<= 99)
        {
            printf("The number %d has 2 digits\n", a);
        }
        else
        {
            if (100 <= a&& a<= 999)
            {
                printf("The number %d has 3 digits\n", a);
            }
            else
            {
                if (1000 <=a && a<= 9999)
                {
                    printf("The number %d has 4 digits\n", a);
                }
            }
        }
    }
}
#include <stdio.h>
int main()
{
    int i, a, b, c;
    printf("Enter number of days in month:");
    scanf("%d", &a);
    printf("Enter starting day of the week (1 = sun, 7 = sat):");
    scanf("%d", &b);
    for (c = 1, i = 1, c = 1; i <= a; i++, c++)
    {
        if (c < b)
        {
            printf("   ");
            i--;
        }
        else
        {
            if (c % 7 == 0)
            {
                printf("%2d ", i);
                printf("\n");
            }
            else
                printf("%2d ", i);
        }
    }
    printf("\n");
}
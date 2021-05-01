#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter numerical grade:");
    scanf("%1d%1d%1d", &c, &a, &b);
    if ((c * 100 + a * 10 + b) > 100 || (c * 100 + a * 10 + b) < 0)
        printf("Illegal value\n");
    else
    {
        if ((c * 100 + a * 10 + b) == 100)
            printf("Letter grade: A\n");
        else
        {
            switch (a)
            {
            case 9:
                printf("Letter grade: A\n");
                break;
            case 8:
                printf("Letter grade: B\n");
                break;
            case 7:
                printf("Letter grade: C\n");
                break;
            case 6:
                printf("Letter grade: D\n");
                break;
            case 5:
                printf("Letter grade: F\n");
                break;
            case 4:
                printf("Letter grade: F\n");
                break;
            case 3:
                printf("Letter grade: F\n");
                break;
            case 2:
                printf("Letter grade: F\n");
                break;
            case 1:
                printf("Letter grade: F\n");
                break;
            case 0:
                printf("Letter grade: F\n");
                break;
            }
        }
    }
}
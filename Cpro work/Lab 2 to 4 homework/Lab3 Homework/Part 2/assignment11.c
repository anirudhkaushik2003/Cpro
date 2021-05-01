#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a two-digit number:");
    scanf("%1d%1d", &a, &b);
    c = (a * 10 + b);
    if ((a * 10 + b) >= 10 && (a * 10 + b) < 20)
    {
        switch (c)
        {
        case 10:
            printf("you entered number ten\n");
            break;
        case 11:
            printf("you entered number eleven\n");
            break;        
        case 12:
            printf("you entered number twelve\n");
            break;       
        case 13:
            printf("you entered number thirteen\n");
            break;
        case 14:
            printf("you entered number fourteen\n");
            break;
        case 15:
            printf("you entered number fifteen\n");
            break;
        case 16:
            printf("you entered number sixteen\n");
            break;
        case 17:
            printf("you entered number seventeen\n");
            break;
        case 18:
            printf("you entered number eighteen\n");
            break;
        case 19:
            printf("you entered number nineteen\n");
            break;
        }
    }
    else
    {
        switch (a)
        {
        case 2:
            printf("you entered number twenty");
            break;
        case 3:
            printf("you entered number thirty");
            break;
        case 4:
            printf("you entered number forty");
            break;
        case 5:
            printf("you entered number fifty");
            break;
        case 6:
            printf("you entered number sixty");
            break;
        case 7:
            printf("you entered number seventy");
            break;
        case 8:
            printf("you entered number eighty");
            break;
        case 9:
            printf("you entered number ninety");
            break;
        case 0:
            printf("you entered number");
            break;
        }
        switch (b)
        {
        case 2:
            printf("-two\n");
            break;
        case 1:
            printf("-one\n");
            break;
        case 3:
            printf("-three\n");
            break;
        case 4:
            printf("-four\n");
            break;
        case 5:
            printf("-five\n");
            break;
        case 6:
            printf("-six\n");
            break;
        case 7:
            printf("-seven\n");
            break;
        case 8:
            printf("-eight\n");
            break;
        case 9:
            printf("-nine\n");
            break;
        default:
            printf("\n");
            break;
        }
    }
}
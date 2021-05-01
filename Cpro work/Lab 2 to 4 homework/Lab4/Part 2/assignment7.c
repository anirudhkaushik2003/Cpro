#include <stdio.h>
int main()
{
    int a[5][5], i, j, b;
    printf("Enter row 1: ");
    for (j = 0; j < 5; j++)
    {
        scanf("%d", &a[0][j]);
    }
    printf("Enter row 2: ");
    for (j = 0; j < 5; j++)
    {
        scanf("%d", &a[1][j]);
    }
    printf("Enter row 3: ");
    for (j = 0; j < 5; j++)
    {
        scanf("%d", &a[2][j]);
    }
    printf("Enter row 4: ");
    for (j = 0; j < 5; j++)
    {
        scanf("%d", &a[3][j]);
    }
    printf("Enter row 5: ");
    for (j = 0; j < 5; j++)
    {
        scanf("%d", &a[4][j]);
    }
    printf("Row totals:");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            b += a[i][j];
        }
        printf("  %d",b);
        b = 0;
    }
    printf("\n");
    b = 0;
     printf("Column totals:");
    for (j = 0; j < 5; j++)
    {
        for (i = 0; i < 5; i++)
        {
            b += a[i][j];
        }
        printf("  %d",b);
        b = 0;
    }
    printf("\n");
}
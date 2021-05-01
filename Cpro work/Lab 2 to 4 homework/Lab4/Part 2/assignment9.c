#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define EMPTY_CELL '.'
int main()
{
    int i, j, b, d;
    char a[10][10];
    srand((unsigned)time(NULL));

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            a[i][j] = EMPTY_CELL;
        }
    }
    a[0][0] = 'A';

    for (i = 0, j = 0, d = 0; d < 25;)
    {
       
        b = rand() % 4;
 
        if (b == 0 && j >= 0 && i >= 0 && a[i][j - 1] == EMPTY_CELL)
        {
            if (j > 0 && i >= 0 && j < 10 && i < 10)
            {
                j--;
                a[i][j] = 'A' + d + 1;

                d++;
            }
            else
                continue;
        }
        else
        {
            if (b == 1 && j >= 0 && i >= 0 && a[i][j + 1] == EMPTY_CELL)
            {
                if (j < 9 && i >= 0 && j < 9 && i < 10)
                {
                    j++;
                    a[i][j] = 'A' + d + 1;

                    d++;
                }
                else
                    continue;
            }
            else
            {
                if (b == 2 && j >= 0 && i >= 0 && a[i - 1][j] == EMPTY_CELL)
                {
                    if (j >= 0 && i > 0 && j < 10 && i < 10)
                    {
                        i--;
                        a[i][j] = 'A' + d + 1;

                        d++;
                    }
                    else
                        continue;
                }
                else
                {
                    if (b == 3 && j >= 0 && i >= 0 && a[i + 1][j] == EMPTY_CELL)
                    {
                        if (j >= 0 && i < 9 && j < 10)
                        {
                            i++;
                            a[i][j] = 'A' + d + 1;

                            d++;
                        }
                        else
                            continue;
                    }
                    else
                    {
                        if (a[i + 1][j] != EMPTY_CELL && a[i][j + 1] != EMPTY_CELL && a[i - 1][j] != EMPTY_CELL && a[i][j - 1] != EMPTY_CELL)
                        {
                            break;
                        }
                        else
                        {
                            continue;
                        }
                    }
                }
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("   %c", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
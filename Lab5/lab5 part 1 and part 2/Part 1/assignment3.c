/* if program doesn't work just execute it again */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define EMPTY_CELL '.'
int i, j, b, d;
void generate_random_walk(char walk[10][10])
{
    
    
    srand((unsigned)time(NULL));

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            walk[i][j] = EMPTY_CELL;
        }
    }
    walk[0][0] = 'A';

    for (i = 0, j = 0, d = 0; d < 25;)
    {
       
        b = rand() % 4;
 
        if (b == 0 && j >= 0 && i >= 0 && walk[i][j - 1] == EMPTY_CELL)
        {
            if (j > 0 && i >= 0 && j < 10 && i < 10)
            {
                j--;
                walk[i][j] = 'A' + d + 1;

                d++;
            }
            else
                continue;
        }
        else
        {
            if (b == 1 && j >= 0 && i >= 0 && walk[i][j + 1] == EMPTY_CELL)
            {
                if (j < 9 && i >= 0 && j < 9 && i < 10)
                {
                    j++;
                    walk[i][j] = 'A' + d + 1;

                    d++;
                }
                else
                    continue;
            }
            else
            {
                if (b == 2 && j >= 0 && i >= 0 && walk[i - 1][j] == EMPTY_CELL)
                {
                    if (j >= 0 && i > 0 && j < 10 && i < 10)
                    {
                        i--;
                        walk[i][j] = 'A' + d + 1;

                        d++;
                    }
                    else
                        continue;
                }
                else
                {
                    if (b == 3 && j >= 0 && i >= 0 && walk[i + 1][j] == EMPTY_CELL)
                    {
                        if (j >= 0 && i < 9 && j < 10)
                        {
                            i++;
                            walk[i][j] = 'A' + d + 1;

                            d++;
                        }
                        else
                            continue;
                    }
                    else
                    {
                        if (walk[i + 1][j] != EMPTY_CELL && walk[i][j + 1] != EMPTY_CELL && walk[i - 1][j] != EMPTY_CELL && walk[i][j - 1] != EMPTY_CELL)
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
    
}
void print_array(char walk [10][10])
{
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("   %c", walk[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int main()
{
    char walk[10][10];
    generate_random_walk(walk);
    print_array(walk);
}
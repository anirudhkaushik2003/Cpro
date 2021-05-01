
/* program sometimes continues to play without asking, redoes an iteration but code is fine*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int roll_dice(void)
{
    int die1, die2;
    die1 = (rand() % 6) + 1;
    die2 = (rand() % 6) + 1;
    return die1 + die2;
}

bool play_game(void)
{
    int roll, points = 0;
    points = 0;

    for (;;)
    {
        roll = roll_dice();
        printf("you rolled: %d\n", roll);
        if (points == 0)
        {
            if (roll == 7 || roll == 11)
                return true;
            else
            {
                if (roll == 2 || roll == 3 || roll == 12)
                    return false;
                else
                {
                    points = roll;
                    printf("your point is: %d\n", points);
                    continue;
                }
            }
        }
        else
        {
            if (roll == points)
                return true;
            else
            {
                if (roll == 7)
                    return false;
                else
                    continue;
            }
        }
    }
}

int main()
{
    char choice;
    int win = 0, lose = 0;
    srand((unsigned)time(NULL));
    do
    {
        if (choice == 'n')
            break;

        for (;;)
        {

            if (play_game() == true)
            {
                printf("you win!\n");
                win++;
            }
            else
            {
                printf("you lose!\n");
                lose++;
            }
            choice = '0';
            printf("play again?(y/n): ");
            scanf("%c", &choice);
            if (choice == 'y' || choice == 'Y' || choice == 'n' || choice == 'N')
                break;
        }

    } while (choice != 'n');
    printf("wins: %d", win);
    printf("  losses: %d\n", lose);
}
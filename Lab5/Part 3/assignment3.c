#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int i, j, x,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c10=0,c11=0,c12=0;
    srand((unsigned)time(NULL));

    for (x = 0; x < 1000000; x++)
    {
        i = (rand() % 6) + 1;
        j = (rand() % 6) + 1;
        i += j;
        switch (i)
        {
        case 2:
            c2++;
            break;
        case 3:
            c3++;
            break;
        case 4:
            c4++;
            break;
        case 5:
            c5++;
            break;
        case 6:
            c6++;
            break;
        case 7:
            c7++;
            break;
        case 8:
            c8++;
            break;
        case 9:
            c9++;
            break;
        case 10:
            c10++;
            break;
        case 11:
            c11++;
            break;
        case 12:
            c12++;
            break;
        default:
            break;
        }
    }
    printf("2,%d\n", c2);
    printf("3,%d\n", c3);
    printf("4,%d\n", c4);
    printf("5,%d\n", c5);
    printf("6,%d\n", c6);
    printf("7,%d\n", c7);
    printf("8,%d\n", c8);
    printf("9,%d\n", c9);
    printf("10,%d\n", c10);
    printf("11,%d\n", c11);
    printf("12,%d\n", c12);
}
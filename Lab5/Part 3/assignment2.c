#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int i, j, d,x, c1=0, c2=0, c3=0, c4=0, c5=0, c6=0;
    srand((unsigned)time(NULL));

    for (x = 0; x < 1000000; x++)
    {
        i = (rand() % 6) + 1;
        switch (i)
        {
        case 1:
            c1++;
            break;
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
        default:
            break;
        }
    }

    printf("1,%d\n", c1);
    printf("2,%d\n", c2);
    printf("3,%d\n", c3);
    printf("4,%d\n", c4);
    printf("5,%d\n", c5);
    printf("6,%d\n", c6);
   
}
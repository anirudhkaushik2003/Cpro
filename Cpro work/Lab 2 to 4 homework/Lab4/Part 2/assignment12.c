#include <stdio.h>
#include <ctype.h>

#define LEN ((int)(sizeof(a) / sizeof(a[0])))
int main()
{
    int i, a[100] = {0}, l;
    char input;
    printf("Enter a word:");
    for (i = 0; i < LEN; i++)
    {
        switch (input = toupper(getchar()))
        {
        case 'A':
            a[i] = 1;
            break;
        case 'B':
            a[i] = 3;
            break;
        case 'C':
            a[i] = 3;
            break;
        case 'D':
            a[i] = 2;
            break;
        case 'E':
            a[i] = 1;
            break;
        case 'F':
            a[i] = 4;
            break;
        case 'G':
            a[i] = 2;
            break;
        case 'H':
            a[i] = 4;
            break;
        case 'I':
            a[i] = 1;
            break;
        case 'J':
            a[i] = 8;
            break;
        case 'K':
            a[i] = 5;
            break;
        case 'L':
            a[i] = 1;
            break;
        case 'M':
            a[i] = 3;
            break;
        case 'N':
            a[i] = 1;
            break;
        case 'O':
            a[i] = 1;
            break;
        case 'P':
            a[i] = 3;
            break;
        case 'Q':
            a[i] = 10;
            break;
        case 'R':
            a[i] = 1;
            break;
        case 'S':
            a[i] = 1;
            break;
        case 'T':
            a[i] = 1;
            break;
        case 'U':
            a[i] = 1;
            break;
        case 'V':
            a[i] = 4;
            break;
        case 'W':
            a[i] = 4;
            break;
        case 'X':
            a[i] = 8;
            break;
        case 'Y':
            a[i] = 4;
            break;
        case 'Z':
            a[i] = 10;
            break;
        default:
            a[i] = 0;
        }
        if (input == '\n')
            break;
    }
    for (i = 0; i < LEN; i++)
    {
       l += a[i]; 
    }
    printf("Scrabble value:%d\n", l);
}
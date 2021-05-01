#include <stdio.h>
#include <ctype.h>

#define LEN ((int)(sizeof(a) / sizeof(a[0])))
int main()
{
    int i;
    char a[100], input;
    printf("Enter phone number:");
    for (i = 0; i < LEN; i++)
    {
        switch (input = getchar())
        {
        case 'A':
            a[i] = '2';
            break;
        case 'B':
            a[i] = '2';
            break;
        case 'C':
            a[i] = '2';
            break;
        case 'D':
            a[i] = '3';
            break;
        case 'E':
            a[i] = '3';
            break;
        case 'F':
            a[i] = '3';
            break;
        case 'G':
            a[i] = '4';
            break;
        case 'H':
            a[i] = '4';
            break;
        case 'I':
            a[i] = '4';
            break;
        case 'J':
            a[i] = '5';
            break;
        case 'K':
            a[i] = '5';
            break;
        case 'L':
            a[i] = '5';
            break;
        case 'M':
            a[i] = '6';
            break;
        case 'N':
            a[i] = '6';
            break;
        case 'O':
            a[i] = '6';
            break;
        case 'P':
            a[i] = '7';
            break;
        case 'Q':
            a[i] = '7';
            break;
        case 'R':
            a[i] = '7';
            break;
        case 'S':
            a[i] = '7';
            break;
        case 'T':
            a[i] = '8';
            break;
        case 'U':
            a[i] = '8';
            break;
        case 'V':
            a[i] = '8';
            break;
        case 'W':
            a[i] = '9';
            break;
        case 'X':
            a[i] = '9';
            break;
        case 'Y':
            a[i] = '9';
            break;
        case 'Z':
            a[i] = '9';
            break;
        default:
            a[i] = input;
        }if (input == '\n')
            break;
    }
    printf("In numeric form:");
    for (i = 0; i < LEN; i++)
    {
        if (a[i] == '\n')
            break;
        else
            printf("%c", a[i]);
    }
    printf("\n");
}
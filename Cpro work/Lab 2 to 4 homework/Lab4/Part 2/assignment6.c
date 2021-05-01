#include <ctype.h> 
#include <stdio.h>

#define LEN ((int)(sizeof(message) / sizeof(message[0])))

int main(void)
{
    char message[500], input;
    int i;
    printf("\nEnter message: ");

    for (i = 0; i < LEN; i++)
    {
        switch (input = toupper(getchar()))
        {
            case 'A':
                message[i] = '4';
                break;
            case 'B':
                message[i] = '8';
                break;
            case 'E':
                message[i] = '3';
                break;
            case 'I':
                message[i] = '1';
                break;
            case 'O':
                message[i] = '0';
                break;
            case 'S':
                message[i] = '5';
                break;
            default:
                message[i] = input;
        }
        if (input == '\n')
            break;
    }

    printf("In B1FF-speak: ");
    for (i = 0; i < LEN; i++)
    {
        if (message[i] == '\n')
            break;
        putchar(message[i]);
    }
    printf("!!!!!!!!!!\n\n");

    return 0;
}
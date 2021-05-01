#include <ctype.h>
#include <stdio.h>

#define LEN ((int)(sizeof(a) / sizeof(a[0])))

int main(void)
{
    char a[80] = {'.'}, input[80];
    int shift , i;
    printf("Enter message: ");
    for (i = 0; i < LEN; i++)
    {
        input[i] = getchar();
        if (input[i] == '\n')
           break;
    }
    printf("Enter shift amount:");
    scanf ("%d",&shift);
    for (i = 0; i < LEN; i++)
    {
        if (input[i] >= 'A' && input[i] <= 'Z')
        {
            a[i] = ((input[i] - 'A') + shift) % 26 + 'A';
        }
        else
        {
            if (input[i] >= 'a' && input[i] <= 'z')
                a[i] = ((input[i] - 'a') + shift) % 26 + 'a';
            else
            {
                if (input[i] == '\n')
                    break;
                else
                    a[i] = input[i];
            }
        }
    }
    printf("Encrypted message: ");
    for (i = 0; i < LEN; i++)
    {
        if (a[i] == '\n')
            break;
        else
        {
            printf("%c", a[i]);
        }
    }
    printf("\n");
}
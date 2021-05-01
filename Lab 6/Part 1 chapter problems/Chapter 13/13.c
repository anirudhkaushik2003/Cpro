#include <ctype.h>
#include <stdio.h>

#define LEN 80

void encrypt (char *a, int shift)
{
    int i;
    for (i = 0; i < LEN; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] = ((a[i] - 'A') + shift) % 26 + 'A';
        }
        else
        {
            if (a[i] >= 'a' && a[i] <= 'z')
                a[i] = ((a[i] - 'a') + shift) % 26 + 'a';
            else
            {
                if (a[i] == '\n')
                    break;
                else
                    a[i] = a[i];
            }
        }
    }
}

int main(void)
{
    char a[80] = {'.'};
    int shift , i;
    printf("Enter message: ");
    for (i = 0; i < LEN; i++)
    {
        a[i] = getchar();
        if (a[i] == '\n')
           break;
    }
    printf("Enter shift amount:");
    scanf ("%d",&shift);
    encrypt(a,shift);
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
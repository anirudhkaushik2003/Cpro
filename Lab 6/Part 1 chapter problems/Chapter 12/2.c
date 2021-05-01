#include <stdio.h>
#include <ctype.h>

int main()
{
    int i, j, b;
    char a[80];
    printf("Enter a sentence:");
    for (i = 0; i < 80; i++)
    {
        b = toupper(getchar());
        if (isalpha(b) != 0)
            a[i] = b;
        else
        {

            if (b == '\n')
            {

                a[i] = b;

                break;
            }
            else
            {
                i--;
                continue;
            }
        }
    }

    for (i = i - 1, j = 0; i >= j && j <= i; i--, j++)
    {

        if ((a[i] - a[j]) == '\0')
            continue;
        else
        {
            printf("Not a palindrome\n");
            return 0;
        }
    }
    printf("Palindrome\n");
}
#include <stdio.h>
#include <ctype.h>

#define N 26

int main()
{
    int check;
    char input,inut;
    int a[26] = {0}, i, index;
    printf("Enter first word: ");
    for (index = 0; input != '\n';)
    {

        if (input != '\n')
        {
            input = toupper(getchar());
            if (isalpha(input))
            {
                index = input - 'A';
                if (index >= 0)
                    a[index] += 1;
            }
            else
                continue;
        }
        else
            break;
    }
    printf("Enter second word: ");
    for (index = 0; inut != '\n';)
    {

        if (inut != '\n')
        {
            inut = toupper(getchar());
            if (isalpha(inut))
            {
                index = inut - 'A';
                if (index >= 0)
                    a[index] -= 1;
            }
            else
                continue;
        }
        else
            break;
    }
    for (i = 0; i < 26; i++)
    {
        check += a[i];
    }
    if (check == 0)
        printf("These are anagrams\n");
    else
        printf("These are not anagrams\n");
}
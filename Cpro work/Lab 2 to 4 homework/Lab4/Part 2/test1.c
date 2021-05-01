#include <stdio.h>
#include <ctype.h>

#define N 26

int main()
{
    long long int check = 0;
    char input = '0', inut = '0';
    long long int a[26] = {0}, i = 0, index = 0;

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
        else if (inut == '\n')
        {
            a[index] = inut;
            break;
        }
    }
    for (i = 0; i < 26; i++)
    {
        if (a[i] == 0)
         continue;
        else check = 1;
    }
    if (check == 0)
        printf("1\n");
    else
        printf("0\n");
}
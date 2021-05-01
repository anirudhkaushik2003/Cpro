#include <stdio.h>
#include <ctype.h>

#define LEN ((int)(sizeof(a) / sizeof(a[0])))
int main()
{
    int i,  l;
    char input , a[12] = {0}, b[12];
    printf("Enter first and last name:");
    for (i = 0; i < LEN; i++)
    {
       b[i] = (getchar());
      
        if (b[i] == ' ')
            break;
    }
    for (i = 0; i < LEN; i++)
    {
       a[i] = (getchar());
      
        if (a[i] == '\n')
            break;
    }

    printf("You entered the name:");
    for (i = 0; i < LEN; i++)
    {
        if (a[i] == '\n')
            break;
       printf("%c",a[i]);
    }
    printf(" %c.\n",toupper(b[0]));
}
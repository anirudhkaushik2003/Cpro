#include <stdio.h>
#include <string.h>

int main()
{
    int a[80], *i,j;
    
    printf("Enter message: ");
    for (i = &a[0]; i <&a[80]; i++)
    {
        *i = getchar();
        if (*i == '\n')
        {
            j = (i - a);
            break;
        }
    }
    for (i=&a[j-1];i>=&a[0];i--)
    {
        putchar(*i);
    }
    printf("\n");
}
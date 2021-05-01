#include <stdio.h>
#include <ctype.h>

#define N 100

int main()

{
    int i;
    char a[100], b[100], input;
    printf("Enter a polynomial(single variable 'x')(Eg - 1x^2 + 2x^1 + 3x^0):");
    for (i = 0; i < 100 && a[i] != '\n'; i++)
    {
        input = getchar();
        a[i] = input;
        if ( a[i] == '\n')
          break;
    }
    for (i = 0; i < 100; i++)
    {
        switch (a[i])
        {
        case '^':
            if (a[i + 1] == '0')
            {
                b[i - 2] = '0';
                b[i-1] = '\n';
            }
            else
            {
                b[i - 2] = ((a[i - 2] - '0') * (a[i + 1] - '0')) + '0';
                b[i + 1] = ((a[i + 1] - '0') - 1) + '0';
                
                b[i] = a[i];
                i++;
            }
            break;
        default:
            b[i] = a[i];
            break;
        }   
    }
    L1: printf("differentiated expression is: ");
    for (i = 0; i < 100; i++)
    {
        if (b[i] == '\n')
            break;
        else
            printf("%c", b[i]);
    }
    printf("\n");
}
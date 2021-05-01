#include <stdio.h>
int main(void)
{
    int i, n, odd,square;
    printf("Enter number of entries in the table:");
    scanf("%d", &n);
    odd = 3;
    for (square = 1 , i = 1; i <= n; odd += 2, i++)
    {
        printf("%d\n", square);
        square += odd;
        
    }
}
#include <stdio.h>
int main(void)
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("The reversal is:");
    do
    {
        printf("%d", a % 10);
        a = a/10;
    } while (a != 0);
    printf("\n");
}
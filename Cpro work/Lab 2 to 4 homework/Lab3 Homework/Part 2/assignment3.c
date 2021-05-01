#include <stdio.h>
int main()
{
    int a;
    float b, c, d;
    printf("Enter the number of shares:");
    scanf("%d", &a);
    printf("Enter price per share:");
    scanf("%f", &b);
    if (a < 2000)
    {
        d = ((a * b) * 0.03) + 33;
    }
    if (a >= 2000){
        d = ((a*b)*0.02) + 33;
    }
    if (a * b < 2500)
    {
        c = 30 + (0.017 * (a * b));
    }
    if (2500 <= a * b && a * b < 6250)
    {
        c = 56 + (0.0066 * (a * b));
    }
    if (6250 <= a * b && a * b < 20000)
    {
        c = 76 + (0.0034 * (a * b));
    }
    if (20000 <= a * b && a * b < 50000)
    {
        c = 100 + (0.0022 * (a * b));
    }
    if (50000 <= a * b && a * b < 500000)
    {
        c = 155 + (0.0011 * (a * b));
    }
    if (500000 <= a * b)
    {
        c = 255 + (0.0009 * (a * b));
    }
    printf("Commission:$ %.2f\n", c);
    printf("Commisiion of rival stockbroker:$%.2f\n",d);
}
#include <stdio.h>
int main()
{
    float amount;
    float interest;
    float monthly;
    float A;
    float B;
    float C, D = 0;
    int n;
    printf("ENTER AMOUNT OF THE LOAN:");
    scanf("%f", &amount);
    printf("ENTER AMOUNT OF THE INTEREST:");
    scanf("%f", &interest);
    printf("ENTER AMOUNT OF THE MONTHLY PAYMENT:");
    scanf("%f", &monthly);
    printf("ENTER NUMBER OF PAYMENTS:");
    scanf("%d", &n);

    do
    {
        A = ((amount * (interest / 100)) / 12 + amount) - monthly;
        amount = A;
        if (A >= 0)
        {
            printf("BALANCE REMAINING AFTER %d PAYMENT: $%.2f\n", n, A);
        }
        else
        {
            printf("$%.2f\n", D);
        }
        n--;
    } while (n != 0);
}
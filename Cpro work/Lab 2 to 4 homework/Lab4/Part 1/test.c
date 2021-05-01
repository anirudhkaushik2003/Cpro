#include <stdio.h>
int main()
{
    float amount;
    float interest;
    float monthly;
    float A;
 
    float D = 0;
    int n,i=1;

    scanf("%f", &amount);

    scanf("%f", &interest);

    scanf("%f", &monthly);

    scanf("%d", &n);
    do
    {
        A = ((amount * (interest / 100)) / 12 + amount) - monthly;
        amount = A;
        if (A >= 0)
        {
            printf("%d: $%.2f\n",i,A);
        }
        else
        {
            printf("%d: $%.2f\n",i, D);
        }
        i++;
        n--;
    } while (n != 0);
}
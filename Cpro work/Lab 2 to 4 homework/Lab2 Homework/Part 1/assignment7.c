#include <stdio.h>
int main()
{
    float amount;
    int A;
    int B;
    int C;
    int D;
   
    printf("ENTER THE AMOUNT:");
    scanf("%f",&amount); 
    A = amount/20;
    B = (amount - 20*A)/10;
    C = (amount - 20*A - 10*B)/5;
    D = (amount - 20*A -10*B - 5*C);
    printf("20 DOLLAR BILLS: %d\n",A);
    printf("10 DOLLAR BILLS: %d\n",B);
    printf("5 DOLLAR BILLS: %d\n",C);
    printf("1 DOLLAR BILLS: %d\n",D);

}
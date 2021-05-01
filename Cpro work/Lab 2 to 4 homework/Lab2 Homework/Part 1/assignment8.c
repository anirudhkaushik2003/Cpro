#include <stdio.h>
int main()
{
float amount;
float interest;
float monthly;
float A;
float B;
float C;
printf("ENTER AMOUNT OF THE LOAN:");
scanf("%f", &amount);
printf("ENTER AMOUNT OF THE INTEREST:");
scanf("%f", &interest);
printf("ENTER AMOUNT OF THE MONTHLY PAYMENT:");
scanf("%f", &monthly);
A = ((amount*(interest/100))/12 + amount) - monthly;
B = ((A*(interest/100))/12 + A) - monthly;
C = ((B*(interest/100))/12 + B) - monthly;
printf("BALANCE REMAINING AFTER FIRST PAYMENT: %f\n",A);
printf("BALANCE REMAINING AFTER SECOND PAYMENT: %f\n",B);
printf("BALANCE REMAINING AFTER THIRD PAYMENT: %f\n",C);



}
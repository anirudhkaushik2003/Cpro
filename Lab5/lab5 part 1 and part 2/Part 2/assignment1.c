#include <stdio.h>
void pay_amount (int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollars/20;
    *tens = (dollars - 20* *twenties)/10;
    *fives = (dollars - 20* *twenties - 10* *tens)/5;
    *ones = (dollars - 20* *twenties -10* *tens - 5* *fives);
    printf("20 DOLLAR BILLS: %d\n",*twenties);
    printf("10 DOLLAR BILLS: %d\n",*tens);
    printf("5 DOLLAR BILLS: %d\n",*fives);
    printf("1 DOLLAR BILLS: %d\n",*ones);
}
int main()
{
    int amount;
    int A;
    int B;
    int C;
    int D;
   
    printf("ENTER THE AMOUNT:");
    scanf("%d",&amount); 
    pay_amount(amount,&A,&B,&C,&D);
    

}
#include <stdio.h>
#include <math.h>

int main()
{
    float amount;
   float final;
    printf("ENTER THE AMOUNT:");
    scanf("%f",&amount);
    final = (5.0f/100.0f)*amount + amount;
printf("FINAL AMOUNT WITH TAX: %f\n",final);
    
    return 0;

}
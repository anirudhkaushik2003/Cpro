#include <stdio.h>
double tax(float a)
{
   float b;
    
    if (a <= 750){
        b = 0.01*a;        
    }
    if (750 < a && a <= 2250){
        b = 7.50 + (0.02*a);
    }
    if (2250 < a && a <= 3750){
        b = 37.50 + (0.03*a);
    }
    if (3750 < a && a <= 5250){
        b = 82.50 + (0.04*a);
    }
    if (5250 < a && a <= 7000){
        b = 142.50 + (0.05*a);
    }
    if (7000 < a){
        b = 230.00 + (0.06*a);
    } 
    return b;
}
int main()
{
    float a,b;
    printf("Enter the amount:");
    scanf("%f",&a);
    b = tax(a);
    printf("Amount of income tax:$%.2f\n",b);
}
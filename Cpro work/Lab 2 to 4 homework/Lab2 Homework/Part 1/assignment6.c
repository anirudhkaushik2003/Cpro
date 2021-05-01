#include <stdio.h>
int main()
{
    float x;
    float equation;
    printf("INPUT VALUE OF X:");
    scanf("%f",&x);
    equation = ((((3*x + 2)*x - 5)*x + 7)*x-6);
    printf("VALUE OF THE EQUATION: %f\n",equation);

}
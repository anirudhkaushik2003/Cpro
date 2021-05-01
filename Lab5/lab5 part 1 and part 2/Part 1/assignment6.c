#include <stdio.h>
#include <math.h>

double polynomial (double x)
{
    double p;
    p = 3*pow(x,5) + 2*pow(x,4) - 5*pow(x,3) - pow(x,2) + 7*x - 6;
    return p;
}
int main()
{ 
    double x,y;
    printf("Enter a value for x:");
    scanf("%lf",&x);
    y = polynomial(x);
    printf("%lf\n",y);
}
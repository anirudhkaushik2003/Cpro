#include <stdio.h>
#include <float.h>
int main(void)
{
    float max = FLT_MIN;
    float n,i;
    printf("Enter no. of numbers to be compared:");
    scanf("%f",&i);
    
    do
    {
        printf("Enter a number:");
        scanf("%f",&n);
        if (n > max)
        max = n;
        --i;
    }while (i>0);
    
    printf("The max is %f\n",max);

}
#include <stdio.h>
#include <math.h>

int main()
{
    float radius;
    double volume;
    
    printf("INPUT RADIUS:");
    scanf("%f",&radius);
    volume = radius*radius*radius*(4.0f/3.0f)*M_PI;
    printf("Volume of the sphere is: %f\n",volume);
    printf("radius: %f",radius);
    return 0;
}
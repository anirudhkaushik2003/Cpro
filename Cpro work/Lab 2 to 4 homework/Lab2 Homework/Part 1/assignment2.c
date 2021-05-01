#include <stdio.h>
#include <math.h>

int main()
{
    int radius;
    double volume;
    radius = 10;
    volume = radius*radius*radius*(4.0f/3.0f)*M_PI;
    printf("volume of the sphere is: %f\n",volume);
    return 0;

}

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the wind speed in knots:");
    scanf("%d",&a);
    if (a < 1){
        printf("Wind force: Calm\n");
    }
    if (1 <= a && a <= 3){
        printf("Wind force: Light air\n");
    }
    if (4 <= a && a <= 27){
        printf("Wind force: Breeze\n");
    }
    if (28 <= a && a <= 47){
        printf("Wind force: Gale\n");
    }
    if (48 <= a && a <= 63){
        printf("Wind force: Storm\n");
    }
    if (68 < a){
        printf("Wind force: Hurricane\n");
    }


}
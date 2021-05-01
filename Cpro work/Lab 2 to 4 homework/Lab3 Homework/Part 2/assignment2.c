#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a 24-hour time:");
    scanf("%d:%d",&a,&b);
    if (a>=12){
        a = a-12;
    }
    else{
        a = a;
    }

    printf("The 12-hour time is: %d:%d\n",a,b);
}
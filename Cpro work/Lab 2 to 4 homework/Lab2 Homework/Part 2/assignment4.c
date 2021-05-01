#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter telephone number[ (xxx) xxx-xxxx]:");
    scanf("(%d) %d-%d",&a,&b,&c);
    printf("you entered %3d.%d.%d\n",a,b,c);
}
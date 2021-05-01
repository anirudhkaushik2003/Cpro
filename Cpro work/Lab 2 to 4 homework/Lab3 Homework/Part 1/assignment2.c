#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter a three-dgit number:");
    scanf("%d",&a);
    b = a/100;
    c =  (a/10)%10;
    d = a%10;
    printf("The reversal is: %d%d%d\n",d,c,b);
}

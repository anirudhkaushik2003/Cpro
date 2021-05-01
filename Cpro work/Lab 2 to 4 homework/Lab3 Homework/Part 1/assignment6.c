#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
    printf("Enter the first 12 digits of the EAN code:");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&p);
    l = (a+c+e+g+i+k);
    m = (b+d+f+h+j+p)*3;
    n = (l+m)-1;
    o = 9-(n%10);
    printf("Check digit: %d\n",o);
}
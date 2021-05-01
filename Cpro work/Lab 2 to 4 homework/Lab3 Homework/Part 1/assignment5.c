#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o;
    printf("Enter the first 11 digits of the UPC code:");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k);
    l = (a+c+e+g+i+k)*3;
    m = b+d+f+h+j;
    n = (l+m)-1;
    o = 9-(n%10);
    printf("Check digit: %d\n",o);
}
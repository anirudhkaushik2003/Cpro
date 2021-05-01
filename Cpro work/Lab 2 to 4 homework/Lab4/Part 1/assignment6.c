#include <stdio.h>
int main(void)
{
    int i,n,d;
    i = 2;
    printf("Enter a number:");
    scanf("%d",&n);
    while ((i*i) <= n)
    {
        d = i*i;
        printf("%d\n",d);
        i = i +2; 
    }
}
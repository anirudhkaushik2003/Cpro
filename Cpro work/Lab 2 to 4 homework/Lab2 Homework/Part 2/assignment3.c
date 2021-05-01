#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter ISBN numer:");
    scanf("%d-%d-%d-%d-%d",&a,&b,&c,&d,&e);
    printf("GSI prefix:%3d\n",a);
    printf("Group identifier:%3d\n",b);
    printf("Publisher code:%3d\n",c);
    printf("Item number:%3d\n",d);
    printf("Check digit:%3d\n",e);
}
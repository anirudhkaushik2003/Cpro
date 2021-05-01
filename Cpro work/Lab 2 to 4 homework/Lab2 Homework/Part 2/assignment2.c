#include <stdio.h>
int main()
{
    int i,a,b,c;
    float j;
    printf("Enter Item Number:");
    scanf("%d",&i);
    printf("Enter unit price:");
    scanf("%f",&j);
    printf("Enter purchase date(mm/dd/yyyy):");
    scanf("%d/%d/%d",&a,&b,&c);
    printf("Item\tUnit \t         Purchase\nnumber\tPrice\t\t Date\n%d \t$%6.2f\t\t %d/%d/%d\n",i,j,a,b,c);
}
#include <stdio.h>
int main()
{
    int i, n,count=0;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    float j = 0, k = 0, l = 0, mean = 0,man = 60.019073;
    for (i = 0; i < n; i++)
    {
        printf("enter term %d: ", i + 1);
        scanf("%f", &j);
        if (j >= 0.8*(man) && j <= 1.2*(man))
           count++;
        k += j;
        l += j*j;
    }
    mean = k / n;
    l = (l/n) - (mean*mean);
    printf("mean = %f\n", mean);
    printf("variance = %f\n",l);
    printf("percentage = %f\n",(count*1.0/n)*100);
}
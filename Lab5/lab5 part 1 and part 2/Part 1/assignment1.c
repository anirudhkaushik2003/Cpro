#include <stdio.h>

#define N 10
int i = 0, j=0;
int keeper2, keeper1;
void sorter(int a[], int low, int high,int n);
void sorter(int a[], int low, int high, int n)
{
    
  
    
    for (i = 0; i < n; i++)
    {
        if (a[i] > a[high])
           { 
               high = i;
           }
        
    }

    keeper2 = a[n-1];
    a[n-1] = a[high];

    a[high] = keeper2;
    

    if (n-1 == 0)
       return;
      else  sorter(a, j, n-2, n-1);
    
}
int main()
{
    int a[N] = {0}, i;
    for (i = 0; i < N; i++)
    {
        printf("Enter the numbers:");
        scanf("%d", &a[i]);
    }

    sorter(a, 0, N-1, N);
    for (i = 0; i < N; i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n");
}
#include <stdio.h>
#include "bubblesort_recursive.c"
#include "bubblesort.c"
#include "mergesort.c"
#include <time.h>
#include <stdlib.h>

int comparision(const void * a, const void * b) 
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
    int n;
    double time_taken;
    scanf("%d", &n);
    int i, a[n], b[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    clock_t t;
    t = clock();
    bubble_sort(b, n);
    t = clock() - t;
    time_taken = ((double)t) / CLOCKS_PER_SEC;
    printf("\ntime take by iterative bubble sort = %lf\n", time_taken);
    for (i = 0; i < n; i++)
    {
        b[i] = a[i];
    }

    t = clock();
    bubble_sort_recursive(b, n);
    t = clock() - t;
    time_taken = ((double)t) / CLOCKS_PER_SEC;
    printf("\ntime take by recursive bubble sort = %lf\n", time_taken);
    for (i = 0; i < n; i++)
    {
        b[i] = a[i];
    }

    t = clock();
    mergesort(b, 0, n - 1);
    t = clock() - t;
    time_taken = ((double)t) / CLOCKS_PER_SEC;
    printf("\ntime take by mergesort = %lf\n", time_taken);
    for (i = 0; i < n; i++)
    {
        b[i] = a[i];
    }

    t = clock();
    qsort(b, n,sizeof(int),comparision);
    t = clock() - t;
    time_taken = ((double)t) / CLOCKS_PER_SEC;
    printf("\ntime take by qsort = %lf\n", time_taken);

    printf("\n");
}
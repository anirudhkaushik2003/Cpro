#include <stdio.h>

void swap_recursive(int *i, int *j)
{
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}

void  bubble_sort_recursive(int a[], int n)
{
    if (n == 1)
        return;
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
            swap_recursive(&a[i], &a[i + 1]);
    }
    bubble_sort_recursive(a, n - 1);
}


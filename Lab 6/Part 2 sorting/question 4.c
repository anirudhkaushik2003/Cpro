#include <stdio.h>

void radix_sort(int arr[], int n)
{
    int maximum = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (maximum < arr[i])
            maximum = arr[i];
    }
    int digits = 0;

    while (maximum > 0)
    {
        digits++;
        maximum /= 10;
    }
    int power = 1;
    for (int i = 0; i < digits; i++)
    {
        int new_array[n];
        int count[10];
        for (int j = 0; j < 10; j++)
            count[j] = 0;
        for (int j = 0; j < n; j++)
        {
            int num = (arr[j] / power) % 10;

            count[num]++;
        }
        for (int j = 1; j < 10; j++)
        {
            count[j] += count[j - 1];
        }
        for (int j = n - 1; j >= 0; j--)
        {
            int num = (arr[j] / power) % 10;

            new_array[count[num] - 1] = arr[j];
            count[num]--;
        }
        for (int j = 0; j < n; j++)
            arr[j] = new_array[j];
        power *= 10;
    }
    for (int j = 0; j < n; j++)
        printf("%d ", arr[j]);
    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    int i, arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array after sorting :\n");
    radix_sort(arr, n);
    return 1;
}
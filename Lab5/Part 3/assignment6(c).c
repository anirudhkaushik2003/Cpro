#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n, i = 0, j = 0;
    srand((unsigned)time(NULL));
    printf("number of bits to be encoded: ");
    scanf("%d", &n);
    int b[n],a[n];

    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 2;
    }
    printf("Enter the bits to be entered separating each bit by a space(ex- 1 1 1 0 1): ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &j);
        b[i] = a[(i + 127) % n] ^ j;
        
    }
    printf("key = ");
    for (i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    printf("encrypted sequence = ");
    for(i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
    printf("\n");
    printf("decrypted data: ");
    for (i=0;i<n;i++)
    {
        b[i] = a[(i + 127) % n] ^ b[i];
        printf("%d",b[i]);
    }
    printf("\n");
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i, c0=0, c1=0, c_0=0, c_1=0, q00=0, q01=0,p00=0,p01=0;
    srand((unsigned)time(NULL));
    int a[1000000],b[1000000];
    printf("generating a random 128 bit seed...\n");
    for (i = 0; i < 127; i++)
    {
        a[i] = rand()%2;
    }
    for (i = 127; i < 1000000; i++)
    {
        a[i] = a[i-1]^a[i-127];
       
    }
    for (i = 127; i < 1000000; i++)
    {
        if (a[i] == 0 && a[i - 1] == 0)
            q00++;
        if (a[i] == 0 && a[i - 1] == 1)
            q01++;
        a[i] = a[i - 1] ^ a[i - 127];
        if (a[i] == 0)
            c0++;
        if (a[i] == 1)
            c1++;
    }
    for (i = 0; i < 1000000; i++)
    {
        b[i] = rand()%2;
      
    }
        for (i = 0; i < 1000000; i++)
    {
        
       if (b[i] == 0)
            c_0++;
        if (b[i] == 1)
            c_1++;
        if (b[i] == 0 && a[i - 1] == 0)
            p00++;
        if (b[i] == 0 && a[i - 1] == 1)
            p01++;
    }
    printf("probability of 0 preceded by 0 by rand seed generator = %f\n", (p00)*100.0 / c_0);
    printf("probability of 0 preceded by 1 by rand seed generator = %f\n", (p01)*100.0 / c_1);
    printf("probability of 0 preceded by 0 by XORG generator = %f\n", (q00)*100.0 / c0);
    printf("probability of 0 preceded by 1 by XORG generator = %f\n", (q01)*100.0 / c1);
}
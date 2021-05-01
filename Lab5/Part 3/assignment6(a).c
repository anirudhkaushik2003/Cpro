#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i, c0=0, c1=0, c_0=0, c_1=0, q00=0, q01=0,p00=0,p01=0;
    srand((unsigned)time(NULL));
    int a[1000000],b[1000000];
    printf("generating random 128 bit seed...\n");
    for (i = 0; i < 127; i++)
    {
        a[i] = rand()%2;

        
    }
    for (i = 127; i < 1000000; i++)
    {
        a[i] = a[i - 1] ^ a[i - 127];
       
        if (a[i] == 0)
            c0++;
        if (a[i] == 1)
            c1++;
    }
    for (i = 0; i < 1000000; i++)
    {
        b[i] = rand()%2;
       if (b[i] == 0)
            c_0++;
        if (b[i] == 1)
            c_1++;
    }

    printf("probability distribution of 0s using rand seed method = %f\n", (c_0)*100.0 / (c_0 + c_1));
    printf("probability distribution of 1s using rand seed method = %f\n", (c_1)*100.0 / (c_0 + c_1));
    printf("probability distribution of 0s using XORG method = %f\n", (c0)*100.0 / (c0 + c1));
    printf("probability distribution of 1s using XORG method = %f\n", (c1)*100.0 / (c0 + c1));
    
   
}

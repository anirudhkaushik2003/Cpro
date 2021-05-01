#include <stdio.h>
int main()
{
    int a, b, c, i;
    int f[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int g[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
    printf("Enter time in 24-hour format(hours:minutes):");
    scanf("%d:%d", &a, &b);
    c = (a * 60 + b);
    for (i = 0; i < 8; i++)
    {
        if (i > 1)
        {
            if (c <= ((f[i] + f[i + 1]) / 2) && c >= ((f[i] + f[i - 1]) / 2))
            {
                if (f[i] >= 767)
                {
                    printf("The closest departure time is %d:%.2dpm, arriving at %d:%.2dpm\n", (f[i] / 60), (f[i] % 60), (g[i] / 60), (g[i] % 60));
                    break;
                }
                else
                {
                    if (f[i] == 679)
                    {
                        printf("The closest departure time is %d:%.2dam, arriving at %d:%.2dpm\n", (f[i] / 60), (f[i] % 60), (g[i] / 60), (g[i] % 60));
                        break;
                    }
                    else
                    {
                        printf("The closest departure time is %d:%.2dam, arriving at %d:%.2dam\n", (f[i] / 60), (f[i] % 60), (g[i] / 60), (g[i] % 60));
                        break;
                    }
                }
            }else continue;
        }
        else if (c <= ((f[i] + f[i + 1]) / 2))
        {
            printf("The closest departure time is %d:%.2dam, arriving at %d:%.2dam\n", (f[i] / 60), (f[i] % 60), (g[i] / 60), (g[i] % 60));
            break;
        }
    }
}
#include <stdio.h>
void find_closest_filght(int desired_time, int *departure_time, int *arrival_time)
{
    int f[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int g[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
    int i,c = desired_time;
    for (i = 0; i < 8; i++)
    {
        if (i > 1)
        {
            if (c <= ((f[i] + f[i + 1]) / 2) && c >= ((f[i] + f[i - 1]) / 2))
            {
                if (f[i] >= 767)
                {
                    *departure_time = f[i];
                    *arrival_time = g[i];
                    printf("The closest departure time is %d:%.2d, arriving at %d:%.2d\n", (*departure_time / 60), (*departure_time % 60), (*arrival_time / 60), (*arrival_time % 60));
                    break;
                }
                else
                {
                    if (f[i] == 679)
                    {
                        *departure_time = f[i];
                        *arrival_time = g[i];
                        printf("The closest departure time is %d:%.2d, arriving at %d:%.2d\n", (*departure_time / 60), (*departure_time % 60), (*arrival_time / 60), (*arrival_time % 60));
                        break;
                    }
                    else
                    {
                        *departure_time = f[i];
                        *arrival_time = g[i];
                        printf("The closest departure time is %d:%.2d, arriving at %d:%.2d\n", (*departure_time / 60), (*departure_time % 60), (*arrival_time / 60), (*arrival_time % 60));
                        break;
                    }
                }
            }
            else
                continue;
        }
        else if (c <= ((f[i] + f[i + 1]) / 2))
        {
            *departure_time = f[i];
            *arrival_time = g[i];
            printf("The closest departure time is %d:%.2d, arriving at %d:%.2d\n", (*departure_time / 60), (*departure_time % 60), (*arrival_time / 60), (*arrival_time % 60));
            break;
        }
    }
}
int main()
{
    int a, b, c, d, e;
    printf("Enter time in 24-hour format(hours:minutes):");
    scanf("%d:%d", &a, &b);
    c = (a * 60 + b);
    find_closest_filght(c, &d, &e);
}
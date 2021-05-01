#include <stdio.h>
#include <math.h>

 #define N 10

/*gloabal varialbles*/
int a[2],b[2];
int n, c;

float valden(float x0)
{
    int i;
    float V = 0, prev_V = 0;
    for (i = 1; i <= n; i++)
    {
        if (i > 0)
        {
            prev_V = V;
            V += b[i - 1] * (i)*pow(x0, (i - 1));
            if (V == 0)
                return prev_V;
        }
        else
            continue;
    }
    
    return V;
}
float valnum(float x0)
{
    int i;
    float V = 0,prev_V = 0;
    for (i = 1; i <= n; i++)
    {
        prev_V = V;
        V += a[i - 1] * pow(x0, i);
        if (V == 0)
                return prev_V;
    }
    V += c;
    return V;
}
float roots(float x0)
{
    int i;
    for(i = 0; i < N; i++)
    {
        x0 = x0 - (valnum(x0) / valden(x0));
    }
    return x0;
}
int main()
{
    int i;
    float x0,x;
    printf("Enter degree of the polynomial: ");
    scanf("%d", &n);

    for (i = n; i > 0; i--)
    {
        printf("Enter coefficient of degree %d: ", i);
        scanf("%d", &a[i - 1]);
        b[i-1] = a[i-1];
    }
    printf("enter costant: ");
    scanf("%d", &c);
    printf("enter x0: ");
    scanf("%f", &x0);
    printf("value f(x0)  = %f\n", valnum(x0));
    printf("value f'(x0) = %f\n", valden(x0));
    x = roots(x0);
    printf("root = %f\n", x);
}
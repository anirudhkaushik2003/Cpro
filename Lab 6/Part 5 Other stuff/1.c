#include <stdio.h>
int main()
{
    int N, i, j, k;
    printf("Enter number of variables: ");
    scanf("%d", &N);
    float a[N][N + 1], VAR[N], multiplier;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N + 1; j++)
        {
            printf("Enter coefficient: ");
            scanf("%f", &a[i][j]);
        }
    }
    for (i = 0; i < N - 1; i++)
    {

        for (j = i + 1; j < N; j++)
        {
            multiplier = a[j][i] / a[i][i];

            for (k = 0; k < N + 1; k++)
            {
                a[j][k] = a[j][k] - multiplier * a[i][k];
            }
        }
    }
    VAR[N - 1] = a[N - 1][N] / a[N - 1][N - 1];

    for (i = N - 2; i >= 0; i--)
    {
        VAR[i] = a[i][N];
        for (j = i + 1; j < N; j++)
        {
            VAR[i] = VAR[i] - a[i][j] * VAR[j];
        }
        VAR[i] = VAR[i] / a[i][i];
    }
    printf("Answers = \n");
    for (i = 0; i < N; i++)
    {
        printf("x[%d] = %0.5f\n", i + 1, VAR[i]);
    }
}

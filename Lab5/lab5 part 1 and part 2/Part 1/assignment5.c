#include <stdio.h>
int n, i, j;


void create_magic_square (int n, int magic_square[n][n])
{
    int row_num = 0, col_num = n/2, prev_row, prev_col;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            magic_square[i][j] = 0;
    }
    for (i = 1; i <= n * n; i++)
    {
        if (row_num >= 0 && col_num >= 0 && row_num < n && col_num < n)
        {
            if (magic_square[row_num][col_num] == 0)
            {
                magic_square[row_num][col_num] = i;
                prev_row = row_num;
                prev_col = col_num;
                row_num--;
                col_num++;
            }
            else
            {
                
                prev_row = prev_row +1;
                magic_square[prev_row][prev_col] = i;
                row_num = (prev_row);
                col_num = (prev_col);
                row_num--;
                col_num++;
            }
        }
        else
        {
            if (row_num < 0 || col_num >= n)
            {
                row_num = ((row_num + n) % n);
                col_num = (col_num % n);
                i--;
            }
        }
    }
    
}
void print_magic_square (int n, int magic_square[n][n])
{
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf(" %6d ", magic_square[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int main()
{
    
    printf("Enter a size: ");
    scanf("%d", &n);
    int a[n][n];
    create_magic_square(n,a);
    print_magic_square(n,a);
    
  
    
}
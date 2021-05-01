#include <stdio.h>

int main(void)
{
    int size, row, col, prev_row, prev_col, i;

    printf("\nThis program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &size);

    if (size < 1 || size > 99 || size % 2 == 0)
    {
        printf("Invalid size.\n\n");
        return 0;
    }

    int magic_square[size][size];
    for (row = 0; row < size; row++)
        for (col = 0; col < size; col++)
            magic_square[row][col] = 0;

    row = 0;
    col = size / 2;
    for (i = 0; i < size * size; i++)
    {
        magic_square[row][col] = i + 1;

        prev_row = row;
        prev_col = col;
        if (row - 1 < 0)
        {
            row = size - 1;
        }
        else
        {
            row--;
        }
        if (col + 1 > size - 1)
        {
            col = 0;
        }
        else
        {
            col++;
        }

        if (magic_square[row][col] != 0)
        {
            row = prev_row + 1;
            col = prev_col;
        }
    }

    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            printf("%5d", magic_square[row][col]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}

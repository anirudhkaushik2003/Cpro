#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i, j;
    for (i = argc - 1; i > 0; i--)
    {
        printf("%s ",argv[i]);
    }
    printf("\n");
}
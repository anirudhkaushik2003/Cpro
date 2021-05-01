#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i,j;
    
    for (i = 1; i <argc; i++)
    {
        j += atoi(argv[i]);
    }
    printf("%d ",j);
    printf("\n");
}
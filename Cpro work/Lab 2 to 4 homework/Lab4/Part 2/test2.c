#include <stdio.h>
int main()
{
    char words[10] = {'a',' ','c','d','e','f','g','h','i','j'};
    int i,j;
    printf("Reversal of sentence: ");
    while (i >= 0)
    {
        while (words[--i] != ' ' && i != 0)
            ;
        j = i == 0 ? 0 : i + 1;
        while (words[j] != ' ' && words[j] != '\0')
            putchar(words[j++]);
        if (i >= 0)
            putchar(' ');
    }
    printf("\n");
}
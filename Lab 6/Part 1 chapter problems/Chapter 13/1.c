#include <stdio.h>
#include <string.h>

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
    {
        if (i < n)
            str[i++] = ch;
    }
    str[i] = '\0';
    return i; /*number of characters stored*/
}
int main()
{
    char words[20], small[20] = "zz", large[20] = "aa";
    for (; strlen(words) != 4;)
    {
        printf("Enter a word: ");
        read_line(words, 20);
        if (strcmp(small, words) >= 0)
            strcpy(small, words);
        if (strcmp(large, words) <= 0)
            strcpy(large, words);
    }
    printf("Smallest word = %s\nLargest word = %s\n",small,large);
}
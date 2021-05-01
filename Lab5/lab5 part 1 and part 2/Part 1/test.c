#include <stdio.h>
#include <ctype.h>
#include <stdbool.h> /* C99 only */

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void)
{
    int letters_seen1[26] = {0};
    int letters_seen2[26] = {0};

    printf("\nEnter first word: ");
    read_word(letters_seen1);

    printf("Enter second word: ");
    read_word(letters_seen2);

    if (equal_array(letters_seen1, letters_seen2) == true)
        printf("The words are anagrams.\n\n");
    else
        printf("The words are not anagrams.\n\n");

    return 0;
}

void read_word(int counts[26])
{
    int i;
    char input;
    for (i = 0; (input = tolower(getchar())) != '\n'; i++)
        if (isalpha(input))
            counts[input - 'a']++;
}

bool equal_array(int counts1[26], int counts2[26])
{
    int i;
    for (i = 0; i < 26; i++)
        if (counts1[i] != counts2[i])
            return false;

    return true;
}
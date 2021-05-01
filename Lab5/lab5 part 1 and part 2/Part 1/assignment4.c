#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int check;
char input, inut;
int i, my_index;
#define N 26
void read_word(int counts[26])
{
    input = '0';
    for (my_index = 0; input != '\n';)
    {

        if (input != '\n')
        {
            input = toupper(getchar());
            if (isalpha(input))
            {
                my_index = input - 'A';
                if (my_index >= 0)
                    counts[my_index] += 1;
            }
            else
                continue;
        }
        else
            break;
    }
    
}
bool equal_array(int counts1[26],int counts2[26])
{
    for (i = 0; i < 26; i++)
    {
        if (counts1[i] != counts2[i])
          return false;
        
    }
    return true;
}
int main()
{
    int a[26] = {0},b[26] = {0};
   
   read_word(a);
   
   read_word(b);
    
  
   
    if (equal_array(a,b) == true)
        printf("These are anagrams\n");
    else
        printf("These are not anagrams\n");
}
/*Write a program that asks the user to enter an international dialing code
 and then looks it up in the country_codes array (see Section 16.3). 
 If it finds the code, the program should display the name of the 
 corresponding country; if not, the program should print an error message.*/
#include <stdio.h>

#define LOR(x) ((int) (sizeof((x)) / sizeof((x)[0])))

const struct {
    char *country;
    int code;
} country_codes[] =
    {{"Argentina",            54}, {"Bangladesh",     889},
     {"Brazil",               55}, {"Burma (Myanmar)", 95},
     {"China",                86}, {"Colombia",        57},
     {"Congo, Dem. Rep. of", 243}, {"Egypt",           20},
     {"Ethiopia",            251}, {"France",          33},
     {"Germany",              49}, {"India",           91},
     {"Indonesia",            62}, {"Iran",            98},
     {"Italy",                39}, {"Japan",           81},
     {"Mexico",               52}, {"Nigeria",        234},
     {"Pakistan",             92}, {"Philippines",     63},
     {"Poland",               48}, {"Russia",           7},
     {"South Africa",         27}, {"South Korea",     82},
     {"Spain",                34}, {"Sudan",          249},
     {"Thailand",             66}, {"Turkey",          90},
     {"Ukraine",             380}, {"United Kingdom",  44},
     {"United States",         1}, {"Vietnam",         84}};

int main() 
{
    int dialing_code;
    printf("\nEnter the international dialing code :");
    scanf("%d", &dialing_code);

    for (int i = 0; i <LOR(country_codes); i++) 
    {
        if ( country_codes[i].code == dialing_code)
        {
            printf("%d is the code for %s", dialing_code, country_codes->country);
            printf("\n");
            return 0;
        }
        else
        {
        }
        }
    printf("Error!!! Wrong entry\n");    

    return 0;
}

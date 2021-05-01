#include <stdio.h>
int main()
{
    int a, b, c, d, e, f;
    printf("Enter first date (mm/dd/yy):");
    scanf("%2d/%2d/%2d", &a, &b, &c);
    printf("Enter first date (mm/dd/yy):");
    scanf("%2d/%2d/%2d", &d, &e, &f);
    if (c < f && c != f)
        printf("The date %d/%d/%d is earlier than %d/%d/%d\n", a, b, c, d, e, f);
    else{
        if (c != f)
        printf("The date %d/%d/%d is earlier than %d/%d/%d\n", d, e, f, a, b, c);
    }
    if (a < d && a != d)
        printf("The date %d/%d/%d is earlier than %d/%d/%d\n", a, b, c, d, e, f);
    else{
        if (c != f)
        printf("The date %d/%d/%d is earlier than %d/%d/%d\n", d, e, f, a, b, c);
    }
    if (b < e && b != e)
        printf("The date %d/%d/%d is earlier than %d/%d/%d\n", a, b, c, d, e, f);
    else{
        if (c != f)
        printf("The date %d/%d/%d is earlier than %d/%d/%d\n", d, e, f, a, b, c);
    }
}

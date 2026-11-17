#include <stdio.h>

int main(void)
{
    int letters = 0;
    int digits = 0;
    char ch;

    while ((ch = getchar()) != '#')
    {
        if (ch >= 'a' && ch <= 'z' ||
            ch >= 'A' && ch <= 'Z')
        {
            letters ++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            digits ++;
        }
    }

    if (letters > 0 || digits > 0)
    {
        printf("letters = %d; digits = %d", letters, digits);
    }
    else
    {
        printf("-1");
    }
    return 0;
}
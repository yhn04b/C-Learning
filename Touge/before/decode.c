#include <stdio.h>

int main(void)
{
    char ch;
    int n;

    scanf(" %c %d", &ch, &n);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c", (ch - 'a' - n % 26 + 26) % 26 + 'a');
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c", (ch - 'A' - n % 26 + 26) % 26 + 'A');
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("%d", ch - '0' - n);
    }
    else
    {
        printf("%c", ch);
    }

    return 0;
}
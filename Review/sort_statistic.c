#include <stdio.h>
#include <string.h>

void check(const char a[], int b[])
{
    for(int i = 0; i < 3; i++)
    {
        b[i] = 0;
    }
    for(int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            b[0]++;
        }
        else if (a[i] >= 'a' && a[i] <= 'z')
        {
            b[1]++;
        }
        else if (a[i] >= '0' && a[i] <= '9')
        {
            b[2]++;
        }
    }
}

int main(void)
{
    char s[101];
    int t[3];

    if (fgets(s, sizeof(s), stdin) == NULL)
    {
        return 1;
    }
    s[strcspn(s, "\n")] = '\0';

    check(s, t);

    printf("Uppercase: %d\nLowercase: %d\nDigits: %d", t[0], t[1], t[2]);

    return 0;
}

//考虑生命周期
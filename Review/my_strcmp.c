#include <stdio.h>
#include <string.h>

int my_strcmp(const char a[], const char b[])
{
    int i = 0;
    while (a[i] == b[i])
    {
        i++;
        if (a[i] == 0 || b[i] == 0)
        {
            break;
        }
    }
    return (unsigned char)a[i] - (unsigned char)b[i];
}

int main(void)
{
    char a[101];
    char b[101];

    if (fgets(a, sizeof(a), stdin) == NULL || fgets(b, sizeof(b), stdin) == NULL)
    {
        return 1;
    }

    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';

    int result = my_strcmp(a, b);
    if (result == 0)
    {
        printf("Equal\n");
    }
    else if (result < 0)
    {
        printf("Less\n");
    }
    else
    {
        printf("Greater\n");
    }
    return 0;
}
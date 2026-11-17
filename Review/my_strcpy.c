#include <stdio.h>
#include <string.h>

size_t my_strlen(const char s[])
{
    int n = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        n++;
    }
    return n;
}


int my_strcpy(char dest[],size_t capacity, const char src[])
{
    size_t n = my_strlen(src);
    if(n >= capacity)
    {
        return 0;
    }
    for(int i = 0; i <= n; i++)
    {
        dest[i] = src[i];
    }
    return 1;
}


int main(void)
{
    char dest[20];
    char src[101];

    if (fgets(src, sizeof(src), stdin) == NULL)
    {
        printf("Invalid");
        return 0;
    }

    src[strcspn(src, "\n")] = '\0';
    if (my_strcpy(dest, sizeof(dest), src))
    {
        printf("Copied: %s", dest);
    }
    else
    {
        printf("Not enough space");
    }
    return 0;
}
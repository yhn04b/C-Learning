#include <stdio.h>
#include <string.h>

int my_strlen(const char s[])
{
    int n = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        n++;
    }
    return n;
}


int main(void)
{
    char s[101];
    if (fgets(s, sizeof(s), stdin) == NULL)
    {
        return 1;
    }
    s[strcspn(s, "\n")] = '\0';
    int n = my_strlen(s);
    printf("Length: %d", n);
}
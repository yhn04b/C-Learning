#include <stdio.h>

int main(void)
{
    int n, num, min;
    scanf("%d", &n);
    scanf("%d", &min);

    for(int i = 1; i < n; i++)
    {
        scanf(" %d", &num);

        if (num < min)
        {
           min = num;
        }
    }

    printf("min = %d", min);
}
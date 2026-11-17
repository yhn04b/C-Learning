#include <stdio.h>

int main(void)
{
    int sum = 0;
    long int x;
    scanf("%ld", &x);

    int n = 0;
    int j[100];

    while (x != 0)
    {
        int y = x % 10;
        if(y % 2 == 0)
        {
            n++;
            j[n - 1] = y;
        }
        x = x / 10;
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum * 10 + j[i];
    }
    printf("%d", sum);
}
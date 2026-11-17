#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    if(n > 1000)
    {
        printf("n <= 1000");
        return 0;
    }

    double sum = 1.0;
    double item = 1.0;
    for(int i = 1; i <= n; i++)
    {
        item = item / i;
        sum += item;
    }

    printf("%.8f", sum);
}
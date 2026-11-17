#include <stdio.h>

int main(void)
{
    double km;
    int extra = 0;
    double price = 0;
    int first = 10;

    scanf("%lf", &km);

    if (km <= 0)
    {
        printf("Invalid\n");
        printf("Price: %.2f", price);
        return 1;
    }
    if (km > 3)
    {
        extra = (int)(km - 3);
        if (km - 3 > extra)
        {
            extra ++;
        }
    }
    price = first + 2 * extra;
    printf("Price: %.2f", price);
    return 0;
}
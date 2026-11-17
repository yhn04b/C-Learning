#include <stdio.h>

int main(void)
{
    int a, b;
    char c;
    double price, discount, total;

    scanf("%d %d %c", &a, &b, &c);
    switch (b)
    {
    case 92:
        price = 7.50;
        break;
    case 95:
        price = 8.00;
        break;
    case 98:
        price = 9.20;
        break;
    default:
        printf("Invalid");
        return 1;
    }

    switch (c)
    {
    case 'A':
        discount = 0.90;
        break;
    case 'B':
        discount = 0.85;
        break;
    case 'C':
        discount = 1.00;
        break;
    
    default:
        printf("Invalid");
        return 2;
    }

    total = a * price * discount;

    printf("%.2f", total);
    return 0;
}
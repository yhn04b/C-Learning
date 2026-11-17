#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);

    int multiply = num % 10;
    int y = num / 10;
    while (y != 0)
    {
        /* code */
        multiply = multiply * (y % 10);
        y /= 10;
    }
    
    printf("%d", multiply);
}
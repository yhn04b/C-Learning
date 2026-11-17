#include <stdio.h>

double f(double x)
{
    if (x < -2 && x != -4)
    {
        return 2 * x * x + 3 * x - 1;
    }
    else if (x >= -2 && x < 5 && x != 1)
    {
        return x * x - 4 * x + 5;
    }
    else
    {
        return 3 * x * x - x + 2;
    }
}

int main(void)
{
    double x, y;

    scanf("%lf", &x);

    y = f(x);

    printf("%.3f\n", y);
    return 0;
}
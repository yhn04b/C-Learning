#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b;
    double S, P, d;

    scanf("%d %d", &a, &b);
    if (scanf("%d %d", &a, &b) != 2)
    {
        return 1;
    }

    if (a > 0 && b > 0)
    {
        S = (double)a * b;
        P = 2 * ((double)a + b);
        d = sqrt((double)a * a + (double)b * b);
        printf("area = %.2f; perimeter = %.2f; diagonal = %.2f", S, P, d);
    }
    else
    {
        printf("Invalid input\n");
    }
    return 0;
}
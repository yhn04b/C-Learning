#include <stdio.h>
#include <math.h>

int main(void)
{
    double sum, item, eps;
    scanf("%lf", &eps);
    sum = 1.0;
    item = 1;

    int fold = 1;
    int i = 0;    

    while (fabs(item) > eps)
    {
        fold = -fold;
        i++ ;
        item = 1.0 / (3 * i + 1);   
        sum += fold * item;
    }
    
    printf("sum = %.6f", sum);
}
#include <stdio.h>

int count_even(int a[], int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}

int sum_even(int a[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            sum += a[i];
        }
    }
    return sum;
}

int main(void)
{
    int integer[5];

    for(int i = 0; i < 5; i++)
    {
        if (scanf("%d", &integer[i]) != 1)
        {
            printf("Invalid input.\n");
            return 1;
        }
    }
    int count = count_even(integer, 5);
    int sum = sum_even(integer, 5);

    printf("Count: %d\nSum: %d", count, sum);

    return 0;
}
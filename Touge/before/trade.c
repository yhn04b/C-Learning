#include <stdio.h>

int main(void)
{
    int x, score;
    int n;
    char op;

    scanf("%d %d", &x, &n);

    score = x;

    for(int i = 0; i < n; i++)
    {
        scanf(" %c %d", &op, &x);

        switch (op)
        {
        case '+':
            score += x;
            break;
        case '-':
            score -= x;
            break;
        case '*':
            score = score * x;
            break;
        default:
            printf("Invalid");
            return 0;
        }
    }
    printf("%d", score);
    return 0;
}
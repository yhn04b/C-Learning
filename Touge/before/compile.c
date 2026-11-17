#include <stdio.h>

int main(void)
{
    int n, score;
    int excellent = 0;
    int good = 0;
    int near = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &score);
        
        if(score >= 90)
        {
            excellent ++;
        }
        else if(score >= 70)
        {
            good ++;
        }
        else
        {
            near ++;
        }

    }

    printf("%d %d %d", excellent, good, near);
    return 0;
}
#include <stdio.h>

int main(void)
{
    char n; 

    for(int i = 0; i < 17; i++)
    {
        if(scanf("%c", &n) != 1)
        {
            printf("no");
            return 0;
        }

        if(n >= '0' && n <= '9')
        {
            continue;
        }
        else
        {
            printf("no");
            return 0;
        }
    }

    if(scanf("%c", &n) != 1)
    {
        printf("no");
        return 0;
    }

    if ((n >= '0' && n <= '9') || n == 'X')
    {
        int extra = getchar();
        if (extra == '\n' || extra == EOF)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }  
    }
    else
    {
        printf("no");
    }
    
}
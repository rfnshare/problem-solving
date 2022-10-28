#include <stdio.h>
int main()
{
    int x, count = 0;
    scanf("%d", &x);
    while (1 <= x)
    {
        if (5 <= x)
        {
            x -= 5;
        }
        else if (4 <= x)
        {
            x -= 4;
        }
        else if (3 <= x)
        {
            x -= 3;
        }
        else if (2 <= x)
        {
            x -= 2;
        }
        else
        {
            x -= 1;
        }

        count++;
    }
    printf("%d\n", count);
}
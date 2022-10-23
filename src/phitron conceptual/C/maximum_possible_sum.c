#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a >= b && a >= c)
    {
        if (b >= c)
        {
            printf("%d", a + b);
        }
        else
        {
            printf("%d", a + c);
        }
    }
    else
    {
        printf("%d", b + c);
    }
}
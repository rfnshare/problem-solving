#include <stdio.h>
int main()
{
    int x, count = 0;
    scanf("%d", &x);
    if (x % 5 == 0)
    {
        x /= 5;
    }
    else
    {
        x = (x/5)+1;
    }
    printf("%d\n", x);
}
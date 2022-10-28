#include <stdio.h>
int main()
{
    int n, h, i, b, count = 0;
    scanf("%d%d", &n, &h);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &b);
        if (b <= h)
        {
            count += 1;
        }
        else
        {

            count += b / h + (b % h != 0);
        }
    }
    printf("%d", count);
}
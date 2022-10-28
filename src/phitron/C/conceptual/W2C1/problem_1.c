#include <stdio.h>
int main()
{
    int k, n, i;
    scanf("%d%d", &n, &k);
    for (i = 1; i <= k; i++)
    {
        if (n % 10 != 0)
        {
            n -= 1;
        }
        else
        {
            n /= 10;
        }
    }
    printf("%d", n);
}
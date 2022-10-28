#include <stdio.h>
int main()
{
    int k, n, i;
    scanf("%d%d", &n, &k);
    if (2 <= n <= pow(10, 9) && 1 <= k <= 50)
    {
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
}
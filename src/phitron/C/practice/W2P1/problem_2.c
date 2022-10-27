#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    if (0 < n)
    {
        for (i = 1; i <= n; i++)
        {
            printf("%d\n", i);
        }
    }
    else
    {
        for (i = 1; i >= n; i--)
        {
            printf("%d\n", i);
        }
    }
}
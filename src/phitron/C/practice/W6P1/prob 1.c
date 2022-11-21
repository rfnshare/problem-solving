#include <stdio.h>
int fun(int n);
int main()
{
    int n, i;
    scanf("%d", &n);
    fun(n);
}

int fun(int n)
{
    int i;
    if (0 <= n)
    {
        for (i = n; i >= -n; i--)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for (i = n; i <= -n; i++)
        {
            printf("%d ", i);
        }
    }
}
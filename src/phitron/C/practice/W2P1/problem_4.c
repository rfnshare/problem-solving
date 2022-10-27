#include <stdio.h>
int main()
{
    int m, n, i;
    scanf("%d%d", &n, &m);
    for (i = 1; i <= n; i++)
    {
        if (i%m==0)
        {
            printf("%d ", i);
        }
        
    }
}
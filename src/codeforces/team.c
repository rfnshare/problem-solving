#include <stdio.h>
int main()
{
    int n, i, j, d, count = 0, total = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            scanf("%d", &d);
            if (d == 1)
            {
                count++;
            }
        }
        if (count >= 2)
        {
            total++;
        }
        count=0;
    }
    printf("%d", total);
}
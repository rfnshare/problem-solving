#include <stdio.h>
int main()
{
    int i, j, k, t, n, arr[1000][100], sum = 0;
    long long int c, p[1000], q = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d%lld", &n, &c);
        if (0 < n && 0 < c)
        {
            for (j = 1; j <= n; j++)
            {
                scanf("%d", &arr[i][j]);
            }
            p[q] = c;
            q += 1;
        }
    }
    for (i = 0; i < t; i++)
    {
        for (j = 1; j <= n; j++)
        {
            sum += arr[i][j] * 2;
        }
        if (sum > p[i])
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
        sum = 0;
    }
}
#include <stdio.h>
int main()
{
    int a, b, n, i, j, k;
    scanf("%d", &b);
    for (a = 1; a <= b; a++)
    {
        scanf("%d", &n);
        if (3 < n)
        {
            if (n % 2 == 0)
            {
                for (i = 1; i <= n / 2; i++)
                {
                    if (i == 1)
                    {
                        j = n / 2;
                        k = n;
                        printf("%d ", j);
                        printf("%d ", k);
                    }
                    else
                    {
                        j = j - 1;
                        printf("%d ", j);
                        k -= 1;
                        printf("%d ", k);
                    }
                }
            }
            else
            {
                for (i = 1; i <= (n / 2); i++)
                {
                    if (i == 1)
                    {
                        j = (n / 2) + 1;
                        k = n;
                        printf("%d ", j);
                        printf("%d ", k);
                    }
                    else
                    {
                        j = j - 1;
                        printf("%d ", j);
                        k -= 1;
                        printf("%d ", k);
                    }
                }
                j = j - 1;
                printf("%d ", j);
            }
        }
        else
        {
            for (int x = 1; x <= n; x++)
            {
                printf("%d ", x);
            }
        }
        printf("\n");
    }
}

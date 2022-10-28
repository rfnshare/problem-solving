#include <stdio.h>
int main()
{
    int n, i, j, k;
    scanf("%d", &n);

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
        for (i = 1; i <= (n / 2) + 1; i++)
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
                if (i != 4)
                {
                    k -= 1;
                    printf("%d ", k);
                }
            }
        }
    }
}

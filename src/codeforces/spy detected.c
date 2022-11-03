#include <stdio.h>
int main()
{
    int i, j, k, N, a[101], t, x, y, fake[101], count = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &N);
        if (3 <= N)
        {
            for (j = 0; j < N; j++)
            {
                scanf("%d", &a[j]);
            }
            for (k = 0; k < N; k++)
            {
                if (a[k] == a[k + 1])
                {
                    a[k] = 1;
                }
                else
                {
                    if (a[k] == a[k + 2] && k + 2 < N)
                    {
                        a[k] = 1;
                        fake[count] = (k + 1) + 1;
                        count++;
                        break;
                    }
                    else if (a[k] != a[k + 1] && N - 2 == k)
                    {
                        a[k] = 1;
                        fake[count] = (k + 1) + 1;
                        count++;
                        break;
                    }
                    else
                    {
                        a[k + 1] = 1;
                        a[k] = 0;
                        fake[count] = k + 1;
                        count++;
                        break;
                    }
                }
            }
        }
    }
    for (i = 0; i < count; i++)
    {
        printf("%d\n", fake[i]);
    }
}
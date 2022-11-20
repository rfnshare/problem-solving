#include <stdio.h>
int main()
{
    int t, w, h, n, i, j, k, count = 1;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d%d%d", &w, &h, &n);
        if (w % 2 != 0 && h % 2 != 0)
        {
            count = 1;
        }
        else
        {
            while (w % 2 == 0)
            {
                w /= 2;
                count *= 2;
            }
            while (h % 2 == 0)
            {
                h /= 2;
                count *= 2;
            }
        }
        // printf("Count = %d\n", count);
        if (count >= n)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        count = 1;
    }
}
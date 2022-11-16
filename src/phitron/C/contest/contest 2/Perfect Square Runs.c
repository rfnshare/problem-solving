#include <stdio.h>
#include <math.h>
int main()
{
    int T, i, j, k, s, count = 0, max = 0, p[20], q = 0, x = 0;
    char arr[200][200];
    scanf("%d", &T);

    for (i = 0; i < T; i++)
    {
        scanf("%d", &s);

        if (0 < s)
        {
            for (j = 0; j < s; j++)
            {
                scanf("%d", &arr[i][j]);
            }
            p[q] = s;
            q += 1;
        }
    }
    for (i = 0; i < T; i++)
    {
        for (j = 0; j < p[i]; j++)
        {
            for (k = 1; k <= 10; k++)
            {
                x = k * k;
                if (x == arr[i][j])
                {
                    count++;
                }
                x = 0;
            }
        }
        if (0 < count)
        {
            printf("%d\n", count);
        }
        else
        {
            printf("-1\n");
        }

        count = 0;
    }
}
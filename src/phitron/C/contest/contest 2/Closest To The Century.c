#include <stdio.h>
int main()
{
    int T, i, j, s, h_count = 0, t_count = 0, max = 0, p[20], q = 0;
    char arr[20][11];
    scanf("%d", &T);

    for (i = 0; i < T; i++)
    {
        scanf("%d", &s);
        if (2 <= s)
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
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
        printf("%d\n", max);
        max = 0;
    }
}
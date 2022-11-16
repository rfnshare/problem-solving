#include <stdio.h>
int main()
{
    int T, i, j, s, h_count = 0, t_count = 0, p[20], q = 0;
    char arr[10][20];
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        for (j = 0; j < s; j++)
        {
            arr[i][j] = 0;
        }
    }
    for (i = 0; i < T; i++)
    {
        scanf("%d", &s);
        for (j = 0; j < s; j++)
        {
            scanf(" %c", &arr[i][j]);
        }
        p[q] = s;
        q += 1;
    }
    for (i = 0; i < T; i++)
    {
        for (j = 0; j < p[i]; j++)
        {
            if (arr[i][j] == 'H')
            {
                h_count++;
            }
            else if (arr[i][j] == 'T')
            {
                t_count++;
            }
        }
        if (h_count > t_count)
        {
            printf("England\n");
        }
        else if (h_count < t_count)
        {
            printf("Pakistan\n");
        }
        h_count = 0;
        t_count = 0;
    }
}
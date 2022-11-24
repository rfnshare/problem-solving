#include <stdio.h>
int main()
{
    int t, a, b, i, j, k, arr[101][1000], p[101], q = 0, count = 0;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        scanf("%d", &a);
        if (3 <= a)
        {
            for (j = 0; j < a; j++)
            {
                scanf("%d", &arr[i][j]);
            }
            p[q] = a;
            q += 1;
        }
    }
    for (i = 0; i < t; i++)
    {
        for (j = 0; j < p[i] - 1; j++)
        {
            if ((arr[i][j] + arr[i][j + 1]) % 2 == 0)
            {
                printf("->if %d\n", arr[i][j] + arr[i][j + 1]);
                continue;
            }
            else
            {
                printf("->else %d\n", arr[i][j] + arr[i][j + 1]);
                count++;
                if (arr[i][j]%2==0)
                {
                    arr[i][j + 1] = arr[i][j];
                }
                else
                {
                    continue;
                }
                
            }
        }
        printf("%d\n", count);
        count = 0;
    }
}
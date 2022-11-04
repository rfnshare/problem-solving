#include <stdio.h>
int main()
{
    int i, j, N, K, run[101], count = 0;
    scanf("%d%d", &N, &K);
    if (1 <= N && N <= 100 && 0 <= K && 0 <= 100)
    {
        for (i = 0; i < N; i++)
        {
            scanf("%d", &run[i]);
        }
        for (i = 0; i < N; i++)
        {
            if (K > run[i])
            {
                count++;
            }
        }
        printf("%d", count);
    }
}
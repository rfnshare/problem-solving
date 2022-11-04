#include <stdio.h>
int main()
{
    int i, j, N, roll[20], K;
    scanf("%d", &N);
    if (1<=N && N<=20)
    {
        for (i = 1; i <= N; i++)
    {
        scanf("%d", &roll[i]);
    }
    scanf("%d", &K);
    if (0 < K && K<=20)
    {
        for (i = K + 1; i <= N; i++)
        {
            if (1<=roll[i])
            {
                printf("%d ", roll[i]);
            }
            
        }
        for (i = 1; i <= K; i++)
        {
             if (1<=roll[i])
            {
                printf("%d ", roll[i]);
            }
        }
    }
    else
    {
        for (i = 1; i <= N; i++)
        {
             if (1<=roll[i])
            {
                printf("%d ", roll[i]);
            }
        }
    }
    }
    
}
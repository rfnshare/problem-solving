#include <stdio.h>
int main()
{
    int i, j, k, N, M, len[100][100], len2[100][100], sum;
    scanf("%d%d", &N, &M);

    for (j = 1; j <= N; j++)
    {
        for (k = 1; k <= M; k++)
        {
            scanf("%d", &len[j][k]);
        }
    }
    for (j = 1; j <= N; j++)
    {
        for (k = 1; k <= M; k++)
        {
            scanf("%d", &len2[j][k]);
        }
    }
    for (j = 1; j <= N; j++)
    {
        for (k = 1; k <= M; k++)
        {
            printf("%d ", len[j][k]+len2[j][k]);
        }
        printf("\n");
    }
}
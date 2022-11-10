#include <stdio.h>
int main()
{
    int i, j, N, M, len[100][100];
    scanf("%d%d", &N, &M);

    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= M; j++)
        {
            scanf("%d", &len[i][j]);
        }
    }
    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= M; j++)
        {
            printf("%d ", len[j][i]);
        }
        printf("\n");
    }
}
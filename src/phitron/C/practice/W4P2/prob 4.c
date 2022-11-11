#include <stdio.h>
int main()
{
    int i, j, k, N, M, res = 0;
    scanf("%d%d", &N, &M);
    int mat1[N][M], mat2[N][M];
    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= M; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= M; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= M; j++)
        {
            for (k = 1; k <= M; k++)
            {
                res += mat1[i][k] * mat2[k][j];
            }
            printf("%d ", res);
            res = 0;
        }
        printf("\n");
    }
}
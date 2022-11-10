#include <stdio.h>
int main()
{
    int i, j, k, N, M, R, pos[100][100];
    scanf("%d", &R);
    for (i = 1; i <= R; i++)
    {
        scanf("%d%d", &N, &M);
        pos[N][M] = 1;
    }
    printf("Total empty cells - %d\n", abs(9 - R));
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            if (pos[i][j] == 0)
            {
                printf("%d %d\n", i, j);
            }
        }
    }
}
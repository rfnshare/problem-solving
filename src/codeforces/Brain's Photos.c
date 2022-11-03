#include <stdio.h>
int main()
{
    int i, j, M, N, count = 0;
    char color[100], msg[20];
    scanf("%d%d", &N, &M);
    for (i = 0; i < N; i++)
    {
        // printf("row");
        for (j = 0; j < M; j++)
        {
            scanf(" %c", &color[j]);
            if (color[j] == 'C' || color[j] == 'M' || color[j] == 'Y')
            {
                count++;
            }
        }
    }
    if (1 <= count)
    {
        printf("#Color");
    }
    else
    {
        printf("#Black&White");
    }
}
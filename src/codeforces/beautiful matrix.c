#include <stdio.h>
int main()
{
    int N = 5, M = 5, i, j, k, arr[10][10];
    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= M; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= M; j++)
        {
            if (arr[i][j] ==1)
            {
                printf("%d", (abs(i-3)+abs(j-3)));
            }
            
        }
    }
}
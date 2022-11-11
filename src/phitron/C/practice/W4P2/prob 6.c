#include <stdio.h>
int main()
{
    int n, i, j, k, arr[100][100];
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == j)
            {
                printf("row-%d and column-%d = ", i, j);
            }
        }
        for (j = 1; j <= n; j++)
        {

            if (i != j)
            {
                printf("%d ", arr[i][j]);
            }
        }
        for (j = 1; j <= n; j++)
        {
            if (i != j)
            {
                printf("%d ", arr[j][i]);
            }
        }
        printf("\n");
    }
}
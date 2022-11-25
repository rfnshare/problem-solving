#include <stdio.h>
int main()
{
    int a, b, i, j, k, arr[100][100];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
}
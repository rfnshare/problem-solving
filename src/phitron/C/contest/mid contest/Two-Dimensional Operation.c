#include <stdio.h>
int main()
{
    int a, b, i, j;
    scanf("%d%d", &a, &b);
    int arr[a][b];
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            if (i+1 == j+1 && arr[i][j] == j+1)
            {
                arr[i][j] += 3;
            }
            else if (i+1 == arr[i][j])
            {
                arr[i][j] += 2;
            }
            else if (j+1 == arr[i][j])
            {
                arr[i][j] += 1;
            }
        }
    }
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
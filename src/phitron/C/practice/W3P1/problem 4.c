#include <stdio.h>
int main()
{
    int i, j, k, N, arr[100];
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (j = 0; j < N; j++)
    {
        printf("%d - ", arr[j]);
        for (k = 0; k < N; k++)
        {
            if (arr[j] == arr[k])
            {
                continue;
            }
            else
            {
                printf("%d ", arr[k]);
            }
        }
        printf("\n");
    }
}
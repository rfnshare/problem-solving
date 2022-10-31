#include <stdio.h>
int main()
{
    int i, j, k, N, arr[100], Q, index, value;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &Q);
    for (k = 0; k < Q; k++)
    {
        scanf("%d", &index);
        scanf("%d", &value);
        arr[index] = arr[index] + value;
    }
    for (j = 0; j < N; j++)
    {
        printf("%d ", arr[j]);
    }
}
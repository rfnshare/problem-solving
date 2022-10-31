#include <stdio.h>
int main()
{
    int i, j, N, arr[100];
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (j = N; j >= 1; j--)
    {
        printf("%d ", arr[j]);
    }
}
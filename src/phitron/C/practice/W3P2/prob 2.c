#include <stdio.h>
int main()
{
    int i, j, N, arr[100], dump;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < N;)
    {
        if (arr[i] > arr[i + 1] && i + 1 < N)
        {
            dump = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = dump;
            i = 0;
        }
        else
        {
            i++;
        }
    }
    for (i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
}
#include <stdio.h>
int main()
{
    int N, x, i, k;
    long long count = 0;
    int arr[300000];
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 1; j < N; j++)
    {
        if (arr[j] < arr[j + 1])
        {
            continue;
        }
        else
        {
            while (arr[j + 1] < arr[j])
            {
                arr[j + 1] = arr[j + 1] + 1;
                count++;
            }
        }
    }
    printf("%lld", count);
}
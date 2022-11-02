#include <stdio.h>
int main()
{
    int i, j, N, arr[100], count = 0, r;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < N; i++)
    {
        if (arr[i] > 3)
        {
            r = sqrt(arr[i]);
        }
        else
        {
            count++;
            continue;
        }
        for (j = 2; j <= r; j++)
        {
            if (arr[i] % j == 0)
            {
                break;
            }
            else if(j==r)
            {
                count++;
            }
        }
    }

    printf("%d\n", count);
    for (i = 0; i < N; i++)
    {
        if (arr[i] > 3)
        {
            r = sqrt(arr[i]);
        }
        else
        {
            count++;
            printf("%d ",arr[i]);
            continue;
        }
        for (j = 2; j <= r; j++)
        {
            if (arr[i] % j == 0)
            {
                break;
            }
            else if(j==r)
            {
                count++;
                printf("%d ",arr[i]);
            }
        }
    }
}
#include <stdio.h>
int main()
{
    int t, a, b, i, j, k, arr[100];
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        scanf("%d", &a);
        for (j = 1; j <= 3; j++)
        {
            scanf("%d", &arr[j]);
        }
        if (arr[a] != 0)
        {
            b = arr[a];
            if (arr[b] != 0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            printf("NO\n");
        }
    }
}
#include <stdio.h>
int main()
{
    int i, j, k, N, arr[100], target, check;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    for (j = 0; j < N; j++)
    {
        for (k = 0; k < N; k++)
        {
            if (arr[j] == arr[k])
            {
                continue;
            }
            else
            {
                check = arr[j] + arr[k];
                if (check == target)
                {
                    printf("YES");
                }
                else
                {
                    printf("NO");
                }
            }
        }
    }
}
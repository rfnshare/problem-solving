#include <stdio.h>
int main()
{
    int i, j, k, N, arr[100], target, check;
    char msg[10];
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
            if (j == k)
            {
                continue;
            }
            else
            {
                check = arr[j] + arr[k];
                if (check == target)
                {
                    strcpy(msg, "YES");
                    break;
                }
                else
                {
                    strcpy(msg, "NO");
                    check = 0;
                }
            }
        }
        if (check == target)
        {
            strcpy(msg, "YES");
            break;
        }
    }
    printf("%s", msg);
}
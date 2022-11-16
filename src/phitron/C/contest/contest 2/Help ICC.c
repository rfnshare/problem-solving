#include <stdio.h>
int main()
{
    int T, i, j, s, h_count = 0, t_count = 0, flag = 1;
    char arr[20][6];
    scanf("%d", &T);

    for (i = 0; i < T; i++)
    {

        for (j = 0; j < 6; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < T; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (arr[i][j] != 0)
            {
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}
#include <stdio.h>
int main()
{
    int row = 3, column = 3;
    int i, j, k, arr[100][100], r_sum[3], c_sum[3], left_corner_sum = 0, right_corner_sum = 0, count = 0;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= column; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= column; j++)
        {
            count += arr[i][j];
        }
        r_sum[i] = count;
        count = 0;
    }
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= column; j++)
        {
            count += arr[j][i];
        }
        c_sum[i] = count;
        count = 0;
    }
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= column; j++)
        {
            if (i == j)
            {
                count += arr[j][i];
            }
        }
        left_corner_sum = count;
    }
    count = 0;
    for (i = 1; i <= row; i++)
    {
        int val = 3;
        count += arr[i][val];
        val -= 1;
    }
    right_corner_sum = count;
    if (r_sum[1] == r_sum[2] && r_sum[2] == r_sum[3] && r_sum[3] == c_sum[1] && c_sum[1] == c_sum[2] && c_sum[2] == c_sum[3] && c_sum[3] == left_corner_sum && left_corner_sum == right_corner_sum)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
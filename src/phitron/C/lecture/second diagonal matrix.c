#include <stdio.h>
int main()
{
    int row, column, ans;
    scanf("%d%d", &row, &column);
    int a[row][column], i, j, count = 0;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    if (row == column)
    {
        ans = 1;
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < column; j++)
            {
                if (i+j == (row-1))
                {
                    continue;
                }

                else if (a[i][j] != 0)
                {
                    ans = 0;
                }
            }
            // printf("\n");
        }
    }
    else
    {
        ans = 0;
    }
    if (ans == 1)
    {
        printf("Diagonal\n");
    }
    else
    {
        printf("Not Diagonal\n");
    }
}
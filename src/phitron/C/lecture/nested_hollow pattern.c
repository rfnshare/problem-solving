#include <stdio.h>
int main()
{
    int i, j, row, column;
    scanf("%d%d", &row, &column);
    for (j = 0; j <= column; j++)
    {
        printf("#");
    }
    printf("\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j <= column; j++)
        {
            if (j == 0)
            {
                printf("#");
            }

            else if (j == column)
            {
                printf("#");
            }

            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (j = 0; j <= column; j++)
    {
        printf("#");
    }
}
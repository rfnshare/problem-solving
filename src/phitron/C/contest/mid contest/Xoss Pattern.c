#include <stdio.h>
int main()
{
    int i, j, row, a = 2;
    scanf("%d", &row);
    if (1 < row)
    {
        for (j = 1; j <= row; j++)
        {
            printf("%d", j);
        }
        printf("\n");
        for (i = 1; i < row - 1; i++)
        {
            for (j = 1; j <= row; j++)
            {
                if (j == 1)
                {
                    printf("%d", a);
                    a += 1;
                }

                else if (j == row)
                {
                    printf("%d", j);
                }

                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        for (j = 1; j <= row; j++)
        {
            printf("%d", row);
        }
    }
    else if(row!=0)
    {
        printf("%d", row);
    }
}
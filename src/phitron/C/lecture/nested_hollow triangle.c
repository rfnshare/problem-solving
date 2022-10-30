#include <stdio.h>
int main()
{
    int i, j, k, row;
    scanf("%d", &row);
    printf("# \n");
    for (i = 0; i < row; i++)
    {
        printf("# ");
        for (j = 0; j < i; j++)
        {
            printf("  ");
        }

        printf("# \n");
    }
    for (k = 0; k <= row + 1; k++)
    {
        printf("# ");
    }
}
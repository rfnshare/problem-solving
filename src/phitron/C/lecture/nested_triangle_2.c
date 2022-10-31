#include <stdio.h>
int main()
{
    int i, j, row, k;
    scanf("%d", &row);
    for (i = 0; i <= row; i++)
    {
        if (i % 2 != 0)
        {
            for (j = 0; j < (row-i)/2; j++)
            {
                printf(" ");
            }
            for (k = 0; k < i; k++)
            {

                printf("*");
            }
            printf("\n");
        }
    }
}
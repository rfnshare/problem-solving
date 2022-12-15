#include <stdio.h>
void print_grid(int arr[][4]);
int main()
{
    int a, b, i, j, k;
    int arr[4][4];
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            arr[i][j] = -1;
        }
    }
    print_grid(arr);
}
void print_grid(int arr[][4])
{
    int i, j;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            if (arr[i][j] == -1)
            {
                printf(" ");
            }

            if (j < 3)
            {
                printf("\t|\t");
            }
        }
        printf("\n");
        if (i < 3)
        {
            printf("____________________________________");
        }

        printf("\n\n");
    }
}
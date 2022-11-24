#include <stdio.h>
void matrix_mul(int arr[][], int arr2[][], int a, int b);
int main()
{
    int a, b, i, j, k, arr[100][100], arr2[100][100], sum = 0;
    scanf("%d%d", &a, &b);
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    matrix_mul(arr, arr2, a, b);
}

void matrix_mul(int arr[][], int arr2[][], int a, int b)
{
    int i, j, k, sum = 0;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            for (k = 0; k < b; k++)
            {
                sum += (arr[i][k] * arr2[k][j]);
            }
            printf("%d ", sum);
            sum = 0;
        }
        printf("\n");
    }
}
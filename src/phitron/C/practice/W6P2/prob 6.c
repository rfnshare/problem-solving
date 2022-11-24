#include <stdio.h>
int rooks(int a, int arr[], int arr2[]);
int main()
{
    int a, b, i, j, k;
    int arr[100], arr2[100], count = 0;
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        scanf("%d", &arr[i]);
        scanf("%d", &arr2[i]);
    }
    rooks(a, arr, arr2);
}

int rooks(int a, int arr[], int arr2[])
{
    int i, j, k, count = 0;
    for (i = 1; i <= a; i++)
    {
        for (j = i; j <= a - 1; j++)
        {
            if (arr[i] == arr[j + 1])
            {
                count += 2;
                arr[i] = 0;
                arr[j + 1] = 0;
            }
            if (arr2[i] == arr2[j + 1])
            {
                count += 2;
                arr2[i] = 0;
                arr2[j + 1] = 0;
            }
        }
    }
    printf("Safe rooks - %d\n", count);
    for (i = 1; i <= a; i++)
    {
        if (arr[i] != 0 && arr2 != 0)
        {
            printf("%d %d\n", arr[i], arr2[i]);
        }
    }
}
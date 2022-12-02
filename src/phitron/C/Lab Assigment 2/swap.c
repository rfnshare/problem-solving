#include <stdio.h>
int swap(int *a, int *b);
int main()
{
    int n, i, arr[100], q, j, arr1[100], arr2[100], arr3[100], count = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &q);
    for (i = 1; i <= q; i++)
    {
        scanf("%d", &arr1[i]);
        scanf("%d", &arr2[i]);
        swap(&arr[arr1[i]], &arr[arr2[i]]);
    }
    for (i = 1; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
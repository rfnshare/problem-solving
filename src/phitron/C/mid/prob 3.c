#include <stdio.h>
int main()
{
    int i, j, N, res;
    int arr[15];
    arr[0] = 1;
    for (i = 0; i < 15; i++)
    {
        res = arr[i] * 2;
        arr[i + 1] = res;
    }
    for (i = 0; i < 15; i++)
    {
        printf("%d ", arr[i]);
    }
}
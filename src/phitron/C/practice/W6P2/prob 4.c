#include <stdio.h>
int sort(int arr[], int a);
int main()
{
    int a, b, i, j, k, arr[100];
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, a);
    for (i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }
}
int sort(int arr[], int a)
{
    int i, temp;
    for (i = 0; i < a - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            i = -1;
        }
    }
    return arr;
    
}
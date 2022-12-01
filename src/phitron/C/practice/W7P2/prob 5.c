#include <stdio.h>
int sum(int arr[], int n);
int main()
{
    int n, arr[100], i, result;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    result = sum(arr, n);
    printf("%d", result);
}
int sum(int arr[], int n)
{
    int i, temp, sum = 0;
    for (i = 0; i < n; i++)
    {
        temp = arr[i] % 10;
        if (temp == 0)
        {
            sum += arr[i];
        }
        temp = 0;
    }
    return sum;
}
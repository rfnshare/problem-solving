#include <stdio.h>
int solve();
int sort(int arr[], int a);
int main()
{
    solve();
}
int solve()
{
    int n, arr[100], k, i, j = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    sort(arr, n);
    
    printf("%dth largest element = %d", k, arr[n-k]);
    printf("\n%dth smallest element = %d", k, arr[k-1]);
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
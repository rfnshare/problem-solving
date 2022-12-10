#include <stdio.h>
int solve(int arr[], int n);
int main()
{
    int a, b, i, j, k;
    int arr[] = {10, 20, 30};
    printf("%d", solve(arr, 3));
}
int solve(int arr[], int n)
{
    if (n == 0)
        return 0;
    int s = solve(arr + 1, n - 1);
    return s + arr[0];
}
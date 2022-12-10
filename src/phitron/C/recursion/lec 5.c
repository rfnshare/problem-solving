#include <stdio.h>
int solve(int i, int arr[], int n);
int main()
{
    int a, b, i, j, k;
    int arr[] = {10, 20, 30};
    printf("%d", solve(0, arr, 3));
}
int solve(int i, int arr[], int n)
{
    if (i == n)
        return 0;
    int s = solve(i + 1, arr, n);
    return s + arr[i];
}
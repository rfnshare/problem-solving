#include <stdio.h>
int solve(int arr[], int t);
int main()
{
    int t, i, arr[102];
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%d", &arr[i]);
    }
    int res = solve(arr, t);
    printf("%d", res);
}
int solve(int arr[], int t)
{
    int i, sum = 0;
    for (i = 1; i <= t; i++)
    {
        if (i % 2 == 0 && arr[i] % 2 == 0)
        {
            sum += i;
            sum += arr[i];
        }
        else if (i % 2 == 1 && arr[i] % 2 == 1)
        {
            sum += i;
            sum += arr[i];
        }
    }
    return sum;
}
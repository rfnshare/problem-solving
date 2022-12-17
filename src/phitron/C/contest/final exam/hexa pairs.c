#include <stdio.h>
void solve();
int myGCD(int a, int b);
int main()
{
    int i, t;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        solve();
    }
}
void solve()
{
    int i, j, n, count = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (myGCD(arr[i], arr[j]) == 1 && i != j)
            {
                count++;
            }
        }
    }
    printf("%d\n", count);
}
int myGCD(int a, int b)
{
    int i, r;
    for (i = a; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            return i;
            break;
        }
    }
    return 0;
}
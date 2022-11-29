#include <stdio.h>
int main()
{
    int a;
    a = solve();
    printf("%d", a);
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
    for (i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            continue;
        }
        else
        {
            j++;
        }
    }
    return j;
}
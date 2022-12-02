#include <stdio.h>
void solve();
int main()
{
    int t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        solve();
    }
}
void solve()
{
    int n, temp;
    scanf("%d", &n);
    temp = n / 4;
    printf("%d %d %d %d\n", temp - 3, temp - 1, temp + 1, temp + 3);
    temp = 0;
}
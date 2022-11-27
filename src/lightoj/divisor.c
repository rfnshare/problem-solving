#include <stdio.h>
void solve(int a)
{
    int n, i = 1;
    scanf("%d", &n);
    if (0 < n)
    {
        if (n == 1)
        {
            printf("Case %d: ", a);
            printf("%d", n);
        }
        else
        {
            printf("Case %d: ", a);
            printf("%d ", i);
            for (i = 2; i < n; i++)
            {
                if (n % i == 0)
                {
                    printf("%d ", i);
                }
            }
            printf("%d", n);
        }
    }
}
int main()
{
    int t, i;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {

        solve(i);
        if (i == t)
        {
            continue;
        }
        else
        {
            printf("\n");
        }
    }
}
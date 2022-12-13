#include <stdio.h>
int solve(int a, int b);
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", solve(a, b));
    return 0;
}
int solve(int a, int b)
{
    if (b == 1)
        return;
    return a * solve(a, b - 1);
}
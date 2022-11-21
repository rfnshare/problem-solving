#include <stdio.h>
int factorial(int x);
int main()
{
    int n, r, k, c;
    scanf("%d%d", &n, &r);

    k = factorial(n) / factorial(n - r);
    c = factorial(n) / (factorial(n - r) * factorial(r));
    printf("%d\n", k);
    printf("%d", c);
}

int factorial(int x)
{
    int i, k = 1;
    for (i = 1; i <= x; i++)
    {
        k *= i;
    }
    return k;
}

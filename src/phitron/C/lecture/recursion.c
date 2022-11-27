#include <stdio.h>
int factorial(int n)
{
    if (n > 0)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", factorial(n));
    return 0;
}
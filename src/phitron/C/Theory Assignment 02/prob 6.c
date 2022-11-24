#include <stdio.h>
int factorial(int x);
float ratio(int x, int y);
int main()
{
    int a, b, j, k;
    scanf("%d%d", &a, &b);
    float i = ratio(a, b);
    printf("%f", i);
}
int factorial(int x)
{
    int i, res = 1;
    for (i = x; i > 0; i--)
    {
        res *= i;
    }
    return res;
}
float ratio(int x, int y)
{
    float a, b;
    a = factorial(x);
    b = factorial(y);
    return a / b;
}

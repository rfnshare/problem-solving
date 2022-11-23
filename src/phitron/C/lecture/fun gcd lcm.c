#include <stdio.h>
int gcd(int x, int y);
int lcm(int x, int y);
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int g = gcd(a, b);
    int l = lcm(a, b);
    printf("GCD = %d\n", g);
    printf("LCM = %d", l);
}
int gcd(int x, int y)
{
    int i, j, k, temp;
    i = x;
    j = y;
    while (y != 0)
    {
        if (x > y)
        {
            temp = y;
            y = x % y;
            x = temp;
        }
        else
        {
            temp = y;
            y = x;
            x = temp;
        }
    }
    return x;
}
int lcm(int x, int y)
{
    int g = gcd(x, y);
    return (x * y) / g;
}
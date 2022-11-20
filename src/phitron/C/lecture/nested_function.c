#include <stdio.h>
float f(int x, int y);
int absolute(int x);
int main()
{
    int x, y;
    float ans;

    x = 12;
    y = 7;
    ans = f(x, y);
    printf("%f", ans);
    return 0;
}

float f(int x, int y)
{
    int tem = absolute(x - 3) + (y + 4) * (y + 4);
    return sqrt(tem);
}
int absolute(int x)
{
    if (0 <= x)
    {
        return x;
    }
    else
    {
        return -1 * x;
    }
}
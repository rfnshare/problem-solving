// sum of n
#include <stdio.h>
int fun(int a);
int main()
{
    int a, b, i = 1, j, k;
    scanf("%d", &a);
    printf("%d", fun(a));
}
int fun(int a)
{
    if (a != 0)
    {
        return a + fun(a - 1);
    }
}
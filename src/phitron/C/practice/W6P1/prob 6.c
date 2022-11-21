#include <stdio.h>
int divisor(int a);
int main()
{
    int a, b, i, j, k;
    scanf("%d", &a);
    divisor(a);
}
int divisor(int a)
{
    int i = 1;
    printf("%d ", i);
    for (i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("%d", a);
}
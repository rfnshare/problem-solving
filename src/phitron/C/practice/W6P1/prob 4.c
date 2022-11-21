#include <stdio.h>
int odd(int a);
int main()
{
    int a, b;
    scanf("%d", &a);
    odd(a);
}

int odd(int a)
{
    int i;
    for (i = 1; i <= a; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}
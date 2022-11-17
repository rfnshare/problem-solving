#include <stdio.h>
int main()
{
    int a, b, i, j, k;
    scanf("%d", &a);
    if (0 < a)
    {
        for (int i = a; i >= -a; i--)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for (int i = a; i <= abs(a); i++)
        {
            printf("%d ", i);
        }
    }
}
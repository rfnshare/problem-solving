#include <stdio.h>
int main()
{
    int i, k, a, b, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (k = 0; k <n-i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
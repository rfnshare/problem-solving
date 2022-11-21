#include <stdio.h>
int r_pyramid(int n);
int pyramid(int n);
int main()
{
    int n, i;
    scanf("%d", &n);
    pyramid(n);
    r_pyramid(n);
}
int pyramid(int n)
{
    int i, j, k, col, s = 0;
    for (i = 1; i <= n; i++)
    {

        for (k = n; k >= i + 1; k--)
        {
            printf(" ");
        }
        col = s + i;
        s = i;
        for (j = 1; j <= col; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int r_pyramid(int n)
{
    int i, j, k, col, s = 0;
    for (i = 1; i <= n; i++)
    {
        col = s + i;
        s = i;
    }
    for (i = 0; i < n; i++)
    {

        for (k = 1; k <= i; k++)
        {
            printf(" ");
        }
        for (j = i; j < col - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

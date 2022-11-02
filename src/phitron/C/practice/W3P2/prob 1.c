#include <stdio.h>
int main()
{
    int i, j, N, a = 0, b = 1, c, sum;
    scanf("%d", &N);
    if (N == 1)
    {
        printf("%d ", a);
    }
    else if (N == 2)
    {
        printf("%d %d ", a, b);
    }
    else
    {
        printf("%d %d ", a, b);
        for (i = 0; i < N - 2; i++)
        {
            sum = a + b; // 1
            printf("%d ", sum);
            c = b;
            b = sum;
            a = c;
        }
    }
}
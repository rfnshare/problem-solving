#include <stdio.h>
int main()
{
    int i, j, N, a = 0, b = 1, c ,sum;
    scanf("%d", &N);
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
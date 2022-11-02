#include <stdio.h>
int main()
{
    int i, j, N = 20, a = 0, b = 1, c, sum, pos;
    scanf("%d", &pos);
    for (i = 1; i <= N; i++)
    {
        sum = a + b; // 1
        c = b;
        b = sum;
        a = c;
        if (pos == i)
        {
            printf("%d ", sum);
        }
    }
}
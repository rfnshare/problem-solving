#include <stdio.h>
int main()
{
    int T, i, j, count=0;
    double N;
    scanf("%d", &T);
    if (1 <= T <= 100)
    {
        for (i = 1; i <= T; i++)
        {
            scanf("%lf", &N);
            do
            {
                N /= 10;
                ++count;
            } while (N != 0);
            printf("%d\n", count);
            count=0;
        }
    }
}
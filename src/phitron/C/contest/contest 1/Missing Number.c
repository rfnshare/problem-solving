#include <stdio.h>
int main()
{
    int T;
    unsigned long long int S, A, B, C, r;
    scanf("%d", &T);
    if (0 < T && T <= 100)
    {
        for (int i = 0; i < T; i++)
        {
            scanf("%lu%lu%lu%lu", &S, &A, &B, &C);
        }
        r = S - (A + B + C);
        printf("%lu\n", r);
    }
}
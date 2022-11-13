#include <stdio.h>
int main()
{
    int T;
    long long int S, A, B, C, r;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%lld%lld%lld%lld", &S, &A, &B, &C);
        r = S - (A + B + C);
        printf("%lld\n", r);
        r = 0;
    }
}
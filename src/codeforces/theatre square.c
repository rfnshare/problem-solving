#include <stdio.h>
int main()
{
    long long int n, m, a, d, e;
    scanf("%lld%lld%lld", &n, &m, &a);
    if (n % a == 0)
    {
        d = n / a;
    }
    else
    {
        d = (n / a) + 1;
    }
    if (m % a == 0)
    {
        e = m / a;
    }
    else
    {
        e = (m / a) + 1;
    }
    printf("%lld", d * e);
}
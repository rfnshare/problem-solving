#include <stdio.h>
int main()
{
    long long int n, m, odd, even;
    scanf("%lld%lld", &n, &m);
    odd = n / 2 + (n % 2 != 0);
    if (m <= odd)
    {
        odd = (m * 2) - 1;
    }
    else
    {
        even = m - odd;
        even = even * 2;
        odd = even;
    }
    printf("%lld", odd);
}
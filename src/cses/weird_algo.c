#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    if (1 < n)
    {
        printf("%lld ", n);
        do
        {
            if (n % 2 == 0)
            {
                n = n / 2;
                printf("%lld ", n);
            }
            else
            {
                n = (n * 3) + 1;
                printf("%lld ", n);
            }

        } while (1 < n);
    }
    else
    {
        printf("%lld ", n);
    }
}
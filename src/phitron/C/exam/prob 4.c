#include <stdio.h>
int main()
{
    long long int n, count = 0, sum = 0;
    scanf("%lld", &n);
    do
    {
        count++;

    } while (n % (long long int)(pow(10, count)) != n);
    for (long long int i = 1; i <= count; i++)
    {
        if (i == 1)
        {
            sum += n % 10;
        }
        else
        {
            sum += (long long int)floor(n / (pow(10, (long long int)i - 1))) % 10;
        }
    }
    printf("%lld\n", sum);
}
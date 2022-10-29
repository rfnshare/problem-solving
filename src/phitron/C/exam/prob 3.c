#include <stdio.h>
int main()
{
    long long int n, count = 0;
    scanf("%lld", &n);
    do
    {
        count++;

    } while (n % (long long int) (pow(10, count)) != n);
    printf("%lld digits",count);
}
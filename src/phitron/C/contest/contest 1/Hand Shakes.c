#include <stdio.h>
int main()
{
    unsigned long long int i, j;
    unsigned long long int N;
    scanf("%lu", &N);
    if (1 <= N)
    {
        i = N * (N - 1) / 2;
        printf("%lu", i);
    }
}
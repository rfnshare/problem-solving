#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    do
    {
        if (n % 2 == 0)
        {
            printf("%d, ", n);
            n /= 2;
        }
        else
        {
            printf("%d, ", n);
            n -= 1;
        }

    } while (1 < n);
    printf("%d", n);
}
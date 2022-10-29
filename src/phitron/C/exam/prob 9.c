#include <stdio.h>
#include <math.h>
int main()
{
    int n, i=1;
    scanf("%d", &n);
    printf("The factors of %d are: %d, ", n,i);
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            printf("%d, ", i);
        }
    }
    printf("%d", n);
}
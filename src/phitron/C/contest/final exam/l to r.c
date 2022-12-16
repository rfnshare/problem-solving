#include <stdio.h>
#include <math.h>
int is_prime(int x); // Defining Function Phototype
int is_prime(int x)
{
    if (x == 1 || x == 2 || x == 3)
    {
        return 1;
    }
    else
    {
        for (int i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}
int main()
{
    int i, l, r, t, j;
    scanf("%d", &t);

    for (j = 0; j < t; j++)
    {
        scanf("%d%d", &l, &r);
        for (i = l; i <= r; i++)
        {
            if (is_prime(i) == 1)
            {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
}

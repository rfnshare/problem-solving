#include <stdio.h>
int is_prime(int x); // Defining Function Phototype
int is_prime(int x)
{
    if (x == 1 || x == 2 || x == 3)
    {
        return 1;
    }
    else
    {
        for (int i = 2; i < sqrt(x); i++)
        {
            if (x % i == 0)
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
    }
}
int main()
{
    int a, m, t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &a);
        m = is_prime(a);
        if (m == 1)
        {
            printf("Prime\n");
        }
        else
        {
            printf("Composite\n");
        }
    }
}
#include <stdio.h>
int sum_of_digits(int a);
int check_prime(int a);
int main()
{
    int a, b, i, j, k;
    scanf("%d", &a);

    if (check_prime(sum_of_digits(a)) == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
int sum_of_digits(int a)
{
    int sum = 0;
    while (0 < a)
    {
        sum += (a % 10);
        a /= 10;
    }
    return sum;
}
int check_prime(int a)
{
    int i;
    for (i = 2; i < a; i++)
    {
        if (a % i == 2)
        {
            return 0;
        }
    }
    return 1;
}
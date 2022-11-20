#include <stdio.h>
int is_prime(int a)
{
    int r, flag = 1;
    r = sqrt(a);
    if (a == 1)
    {
        flag = 1;
    }
    else if (a == 2)
    {
        flag = 1;
    }
    else
    {
        for (int i = 2; i <= r; i++)
        {
            if (a % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }

    return flag;
}

int main()
{
    int a, ans;
    scanf("%d", &a);
    ans = is_prime(a);
    if (ans == 1)
    {
        printf("%d is a prime number.\n", a);
    }
    else
    {
        printf("%d is a composite number.\n", a);
    }

    return 0;
}
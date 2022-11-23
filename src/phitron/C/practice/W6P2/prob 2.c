#include <stdio.h>
int is_prime(int a);
int main()
{
    int a, b, i, j, k;
    int sum = 0, count = 0, ans, p[1000], q = 2;
    scanf("%d", &a);
    while (count != a * a)
    {
        ans = is_prime(q);
        if (ans == 1)
        {
            p[count] = q;
            count++;
        }
        q += 1;
    }
    count = 0;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            printf("%d ", p[count]);
            count++;
        }
        printf("\n");
    }
}

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
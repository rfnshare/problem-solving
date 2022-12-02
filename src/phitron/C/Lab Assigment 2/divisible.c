#include <stdio.h>
int is_divisible_by_three(int a);
int is_divisible_by_five(int a);
int main()
{
    int a, count = 0, t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &a);
        if (is_divisible_by_three(a) == 1)
        {
            count++;
        }
        else if (is_divisible_by_five(a) == 1)
        {
            count++;
        }
    }
    if (0 < count)
    {
        printf("%d", count);
    }
    else
    {
        printf("-1");
    }
}
int is_divisible_by_three(int a)
{
    if (a % 3 == 0)
    {
        return 1;
    }
    return -1;
}
int is_divisible_by_five(int a)
{
    if (a % 5 == 0)
    {
        return 1;
    }
    return -1;
}
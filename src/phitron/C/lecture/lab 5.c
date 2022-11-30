#include <stdio.h>
int leap_year(int a);
int is_distinct(int a);
int main()
{
    int a, b, i, j, k;
    scanf("%d", &a);
    if (leap_year(a) == is_distinct(a))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
int is_distinct(int a)
{
    int count[] = {0, 0, 0, 0, 0, 0, 0, 0, 0}, ld;
    while (0 < a)
    {
        ld = a % 10;
        count[ld]++;
        a /= 10;
    }
    for (int i = 0; i < 9; i++)
    {
        if (count[i] > 1)
        {
            return 0;
        }
    }
    return 1;
}
int leap_year(int a)
{
    if (a % 4 == 0 && a % 100 != 0)
    {
        return 1;
    }
    else
    {
        if (a % 400 == 0 && a % 100 == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
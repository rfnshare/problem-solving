#include <stdio.h>
int is_seven_present(int x);
int sum(int x);
int ldp(int x);
int main()
{
    int n, r, k, c;
    scanf("%d", &n);

    if (is_seven_present(n) == 1 && sum(n) > 10 && ldp(n) == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}

int is_seven_present(int x)
{
    while (x > 0)
    {
        if (x % 10 == 7)
        {
            return 1;
        }
        x /= 10;
    }
    return 0;
}
int sum(int x)
{
    int sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
int ldp(int x)
{
    int ld = x % 10;
    if (ld == 2 || ld == 3 || ld == 5 || ld == 7)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
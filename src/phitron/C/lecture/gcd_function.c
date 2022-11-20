#include <stdio.h>
int myGCD(int a, int b)
{
    int i, r;
    for (i = a; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            return i;
            break;
        }
    }
}

int main()
{
    int a, b, ans;
    scanf("%d%d", &a, &b);

    ans = myGCD(a, b);
    printf("The GCD is %d\n", ans);
    return 0;
}
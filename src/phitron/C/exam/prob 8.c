#include <stdio.h>
int main()
{
    int big, b, small, sm, bg, result,gcd,lcm;
    scanf("%d%d", &small, &big);
    sm = small;
    bg = big;
    while (small != 0)
    {
        if (big < small)
        {
            b = small;
            small = big;
            big = b;
            result = big % small;
            big = small;
            small = result;
        }
        else
        {
            result = big % small;
            big = small;
            small = result;
        }
    }
    gcd = big;
    lcm = (sm*bg)/gcd;
    printf("The LCM of %d and %d is %d.", sm, bg, lcm);
}
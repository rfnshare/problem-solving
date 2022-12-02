#include <stdio.h>
int main()
{
    int a, i, count = 0, sum1 = 0, sum2 = 0;
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        sum1 += i;
        count++;
        if (count == 3)
        {
            i += 3;
            count = 0;
        }
    }
    count = 0;
    for (i = 4; i <= a; i++)
    {
        sum2 += i;
        count++;
        if (count == 3)
        {
            i += 3;
            count = 0;
        }
    }
    printf("%d", sum1 - sum2);
}
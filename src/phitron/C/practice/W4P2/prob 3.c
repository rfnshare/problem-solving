#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, N, len = 0, count = 0, a = 1;
    double res;
    char S[120];
    scanf("%s", &S);
    for (i = 0; S[i] != '\0'; i++)
    {
        len += (S[i] - 96);
    }

    while (a <= len)
    {
        count++;
        a *= 2;
        if (a > len)
        {
            printf("NO");
            break;
        }
        else if (a == len)
        {
            printf("YES\n");
            printf("cost = 2^%d", count);
            break;
        }
    }
}
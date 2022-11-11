#include <stdio.h>

int main()
{
    int a, i, c = 0, d, sum = 0;
    scanf("%d", &a);
    d = a;
    do
    {
        a = a / 10;
        c = c + 1;
    } while (floor(a) != 0);

    for (i = 0; i < c; i++)
    {
        int b = floor(d / pow(10, i));
        sum += b % 10;
    }
    printf("%d\n", sum);
}

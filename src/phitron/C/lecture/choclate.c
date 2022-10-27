#include <stdio.h>
int main()
{
    int a, p, ep, c;
    scanf("%d", &a);

    p = a / 4;
    ep = a % 4;

    while (3 < (p + ep))
    {

        c = p;
        a = a + p;
        p = (p + ep) / 4;
        ep = (c + ep) % 4;
    }
    printf("%d", a + p);
}
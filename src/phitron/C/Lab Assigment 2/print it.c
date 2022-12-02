#include <stdio.h>
int main()
{
    int a, b;
    int *p;
    int *q;
    scanf("%d%d", &a, &b);
    p = &a;
    q = &b;
    printf("%d %d", *p, *q);
}
#include <stdio.h>
int main()
{
    int a = 5;
    int *p = &a;

    printf("%p\n", p);

    int **q = &p;
    printf("%p\n", q);
    printf("%p\n", *q);
    printf("%d\n", **q);
    a = 7;
    printf("%d\n", **q);
}
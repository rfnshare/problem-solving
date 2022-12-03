#include <stdio.h>
int main()
{
    int a = 7;
    double b = 7.5;
    char c = 'a';
    int *pi;
    double *pd;
    pi = &a;
    pd = (double*)pi;

    b = (double)25 / 4;
    printf("%d %lf %c\n", a, b, c);
    printf("%p %p", pi,pd);
}
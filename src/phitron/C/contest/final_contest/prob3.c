#include <stdio.h>
void pass_by_reference(int *a);
int pass_by_value(int a);
int main()
{
    int a, b, i, j, k;
    a = 5;
    pass_by_reference(&a);
    printf("%d ", a);
    b = 10;
    printf("%d", pass_by_value(b));
}
void pass_by_reference(int *p)
{
    *p = 7;
}
int pass_by_value(int a)
{
    a = 12;
    return a;
}
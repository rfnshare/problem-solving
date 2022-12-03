#include <stdio.h>
int main()
{
    int a, b, i, j, k;
    a = 5;
    printf("Before Change %d\n", a);
    func(&a);
    printf("After Change %d", a);
}
void func(int *x)
{
    *x = 17;
}
#include <stdio.h>
int main()
{
    int a, b, i, j, k;
    a = 5;
    b = 12;
    int large, small;
    func(a, b, &large, &small);
    printf("Large %d\n", large);
    printf("Small %d", small);
}
void func(int a, int b, int *x, int *y)
{
    *x = a>b?a:b;
    *y = a<b?a:b;
    // if (a > b)
    // {
    //     *x = a;
    //     *y = b;
    // }
    // else
    // {
    //     *x = b;
    //     *y = a;
    // }
}
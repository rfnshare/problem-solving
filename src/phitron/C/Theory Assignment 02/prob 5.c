#include <stdio.h>
int add_three_nums(int a, int b, int c);
int main()
{
    int a, b, i, j, k;
    scanf("%d%d", &a, &b);
    i = add_three_nums(a, b, 0);
    printf("%d", i);
}
int add_three_nums(int a, int b, int c)
{
    return a + b + c;
}

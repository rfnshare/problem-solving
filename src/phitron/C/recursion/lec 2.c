// print from 1 to n
#include <stdio.h>
void fun(int a);
int main()
{
    int a, b, i = 1, j, k;
    scanf("%d", &a);
    fun(a);
}
void fun(int a)
{
    if (a == 0)
    {
        return;
    }

    printf("%d ", a);
    fun(a - 1);
}
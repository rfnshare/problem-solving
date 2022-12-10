// print from n to 1
#include <stdio.h>
void fun(int i, int a);
int main()
{
    int a, b, i = 1, j, k;
    scanf("%d", &a);
    fun(i, a);
}
void fun(int i, int a)
{
    if (i > a)
    {
        return;
    }

    fun(i + 1, a);
    printf("%d ", i);
}
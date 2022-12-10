// print from 1 to n
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

    printf("%d ", i);
    fun(i + 1, a);
}
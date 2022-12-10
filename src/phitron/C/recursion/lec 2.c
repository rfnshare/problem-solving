// print from n to 1
#include <stdio.h>
void fun(int a);
int main()
{
    int a;
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
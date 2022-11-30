#include <stdio.h>
int recursion(int a);
int main()
{
    int a, b, i, j, k;
    scanf("%d", &a);
    b = recursion(a);
    printf("%d", b);
}
int recursion(int a)
{
    if (0<a)
    {
        
        return a + recursion(a-1);
    }
}
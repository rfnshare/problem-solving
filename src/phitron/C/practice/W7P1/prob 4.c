#include <stdio.h>
int recursion(int a);
int main()
{
    int a, b, i, j, k;
    scanf("%d",&a);
    recursion(a);
}
int recursion(int a)
{
    printf("%d ",a);
    if (1<a)
    {
        recursion(a-1);
    }
    
}
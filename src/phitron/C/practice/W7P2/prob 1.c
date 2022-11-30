#include <stdio.h>
int average(int* a, int* b);
int main()
{
    int a, b, i, j, k;
    scanf("%d%d", &a,&b);
    b = average(&a,&b);
    printf("%d", b);
}
int average(int* a,int* b)
{
    return (*a+*b)/2;
}
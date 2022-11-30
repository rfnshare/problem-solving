#include<stdio.h>
int solve(int* a,int* b, int* c);
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int z = solve(&a,&b,&c);
    printf("%d", z);
}
int solve(int* a,int* b, int* c)
{
    return *a+*b+*c;
}
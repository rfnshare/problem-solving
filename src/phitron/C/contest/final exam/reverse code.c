#include<stdio.h>
void solve();
int main()
{
    int t,i;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        solve();
    }
}
void solve()
{
    int a, digit;
    scanf("%d",&a);
    while (a!=0)
    {
        digit = a%10;
        printf("%c",digit+64);
        a/=10;
    }
    printf("\n");
}
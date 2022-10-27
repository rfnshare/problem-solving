#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    if(a+b>c && b+c>a && a+c>b && 0!=a && 0!=b && 0!=c)
    {
        printf("This triangle is valid");
    }
    else
    {
        printf("The triangle is not valid");
    }
}

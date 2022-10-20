#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Sample Input:\n");
    scanf("%d%d%d", &a, &b, &c);
    if(a>b && a>c)
    {
        printf("A is Bigger");
    }
    else if(b>a && b>c)
    {
        printf("B is Bigger");
    }
    else if(c>a && c>b)
    {
        printf("C is Bigger");
    }
    else
    {
        printf("They are equal");
    }
    return 0;
}


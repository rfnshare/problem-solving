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
        if (a==b && a==c)
        {
            printf("They are equal");
        }
        else if(a==b)
        {
            printf("A and B both are bigger");
        }
        else if(a==c)
        {
            printf("A and C both are bigger");
        }
        else
        {
            printf("B and C both are bigger");
        }
    }
    return 0;
}


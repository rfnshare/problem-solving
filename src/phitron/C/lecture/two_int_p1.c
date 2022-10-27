#include<stdio.h>
int main()
{
    int a,b;
    printf("Sample Input:\n");
    scanf("%d%d", &a, &b);
    if(a>b)
    {
        printf("A is Bigger");
    }
    else if(b>a)
    {
        printf("B is Bigger");
    }
    else
    {
        printf("They are equal");
    }
    return 0;
}

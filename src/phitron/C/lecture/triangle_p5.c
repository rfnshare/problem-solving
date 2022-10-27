#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Sample Non Negative Input:\n");
    scanf("%d%d%d", &a,&b,&c);
    if (0<a && 0<b && 0<c)
    {
        if(a+b>c && b+c>a && a+c>b)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }


    return 0;
}


#include<stdio.h>

int main()
{
    int a,b;
    printf("Sample Non Negative Input:\n");
    scanf("%d%d", &a, &b);
    if (a+b>=100)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }



    return 0;
}


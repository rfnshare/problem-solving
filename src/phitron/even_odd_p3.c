#include<stdio.h>

int main()
{
    int a,b;
    printf("Sample Input:\n");
    scanf("%d", &a);
    if(a%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }

    return 0;
}
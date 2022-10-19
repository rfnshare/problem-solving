#include<stdio.h>
// find out number is even or odd then sum
int main()
{
    int x,a,b;
    printf("Enter a number: ");
    scanf("%d%d%d", &x,&a,&b);
    if (x%2==0)
    {
        printf("%d + %d = %d",a,b,a+b);
    }
    else
    {
        printf("%d - %d = %d",a,b,a-b);
    }
    return 0;
}


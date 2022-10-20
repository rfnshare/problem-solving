#include<stdio.h>
//Find Out Numbers are equals or not

int main()
{
    int a,b;
    printf("Test Data: ");
    scanf("%d%d", &a,&b);
    if(a==b)
    {
        printf("Number1 and Number2 are equal");
    }
    else
    {
        printf("Number1 and Number2 are not equal");
    }

    return 0;
}

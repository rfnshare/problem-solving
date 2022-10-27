#include<stdio.h>
//Find Out Number is positive or negetive

int main()
{
    int a;
    printf("Test Data: ");
    scanf("%d", &a);
    if(0<a)
    {
        printf("%d is a positive number", a);
    }
    else
    {
        printf("%d is a negetive number", a);
    }

    return 0;
}


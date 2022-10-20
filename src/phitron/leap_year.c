#include<stdio.h>
//Find Out Year is leap year or not

int main()
{
    int a;
    printf("Test Data: ");
    scanf("%d", &a);
    if(a%4==0 && a%100!=0)
    {
        printf("%d is a Leap Year", a);
    }
    else
    {
        if(a%400==0 && a%100==0)
        {
            printf("%d is a Leap Year", a);
        }
        else
        {
            printf("%d is NOT a Leap Year", a);
        }
    }

    return 0;
}


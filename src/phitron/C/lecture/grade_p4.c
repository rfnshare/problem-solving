#include<stdio.h>

int main()
{
    int a;
    printf("Sample Non Negative Input:\n");
    scanf("%d", &a);
    if(0<=a)
    {
        if(0<=a && 32>=a)
        {
            printf("F");
        }
        else if(33<=a && 39>=a)
        {
            printf("D");
        }
        else if(40<=a && 49>=a)
        {
            printf("C");
        }
        else if(50<=a && 59>=a)
        {
            printf("B");
        }
        else if(60<=a && 69>=a)
        {
            printf("A-");
        }
        else if(70<=a && 79>=a)
        {
            printf("A");
        }
        else
        {
            printf("A+");
        }
    }
    else
    {
        printf("Enter Non Negative Int Number");
    }


    return 0;
}

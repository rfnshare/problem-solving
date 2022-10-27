#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a <= 12)
    {
        if (a == 2)
        {
            printf("Month have 28 days");
        }
        else if (a % 2 == 0 && a <= 7)
        {
            printf("Month have 30 days");
        }
        else if (a % 2 == 1 && 9 <= a)
        {
            printf("Month have 30 days");
        }
        else
        {
            printf("Month have 31 days");
        }
    }
    else
    {
        printf("Invalid Input");
    }
}

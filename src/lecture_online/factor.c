// Author: Abdullah Al Faroque
// Date: 05/10/2022
/* Program for Divisor Counting */
#include <stdio.h>
void main()
{
    int a, b;
    scanf("%d", &b);
    if (b%2==0)
    {
        a = b/2;
    }
    else
    {
        a = b/2;
    }
    for(int i=1; i<a+1; i++)
    {
        if(b%i==0)
        {
             printf("%d\n", i);
        }
        if(i==a)
        {
            printf("%d\n", b);
        }
    }
}

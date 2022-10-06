// Author: Abdullah Al Faroque
// Date: 06/10/2022
/* Determine n is prime or composite */
#include <stdio.h>
#include <math.h>
void main()
{
    int a;
    scanf("%d", &a);
    int r = sqrt(a);
    for(int i=2; i<=r; i++)
    {
        if (a%i==0)
        {
            printf("Composite Number");
            break;
        }
        if (i==r)
        {
            printf("Prime Number");

        }
    }

}


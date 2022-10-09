// Author: Abdullah Al Faroque
// Date: 09/10/2022
/* Find factorial for n */
// Version 1.0
#include <stdio.h>

#include <math.h>

void main()
{
    int a,b,c = 1;
    scanf("%d", &a);
    for (int i=a; i>0; i--)
    {
        c = i * c;
    }
    printf("%d\n", c);
}

// Author: Abdullah Al Faroque
// Date: 06/10/2022
/* Extract Digits From An Integer */
// Version 1.0
#include <stdio.h>

#include <math.h>

void main()
{
    int a, i, c=0, d;
    scanf("%d", &a);
    d = a;
    do {
        a = a/10;
        c = c+1;
    }
    while(floor(a)!=0);
// Bug-> Can't calculate length over 9
    printf("Length is %d\n", c);
    for(i=0; i<c; i++)
    {
        int b = floor(d/pow(10,i));
        printf("%d\n", b%10);
    }



}


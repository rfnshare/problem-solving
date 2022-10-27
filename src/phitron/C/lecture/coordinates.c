#include<stdio.h>

int main()
{
    int a,b;
    printf("Sample Non Negative Input:\n");
    scanf("%d%d", &a, &b);
    if(0<a && 0<b)
    {
        printf("The coordinate point (%d,%d) lies in the First quadrant.",a,b);
    }
    else if(a<0 && 0<b)
    {
        printf("The coordinate point (%d,%d) lies in the Second quadrant.",a,b);
    }
    else if(a<0 && b<0)
    {
        printf("The coordinate point (%d,%d) lies in the Thrid quadrant.",a,b);
    }
    else
    {
        printf("The coordinate point (%d,%d) lies in the Fourth quadrant.",a,b);
    }



    return 0;
}



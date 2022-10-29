#include <stdio.h>
int main()
{
    int a, b, c, d, largest, smallest;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a > b && a > c && a > d)
    {
        largest = a;
        if (b < c && b < d )
        {
            smallest = b;
        }
        else if(c<d)
        {
            smallest = c;
        }
        else
        {
            smallest = d;
        }
    }
    else if (b > a && b > c && b > d)
    {
        largest = b;
        if (a < c && a < d )
        {
            smallest = a;
        }
        else if(c<d)
        {
            smallest = c;
        }
        else
        {
            smallest = d;
        }
    }
    else if (c > a && c > b && c > d)
    {
        largest = c;
        if (d < a && c < b )
        {
            smallest = d;
        }
        else if(a<b)
        {
            smallest = a;
        }
        else
        {
            smallest = b;
        }
    }
    else
    {
        largest = d;
        if (c < a && c < b )
        {
            smallest = c;
        }
        else if(a<b)
        {
            smallest = a;
        }
        else
        {
            smallest = b;
        }
    }
    printf("Largest = %d\n", largest);
    printf("Smallest = %d", smallest);
}
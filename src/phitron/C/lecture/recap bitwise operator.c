#include <stdio.h>
int main()
{
    int a, b, c, count=0;
    a = 22;
    b = 5;
    // c = b>>1;
    // c = c>>1;
    // c = c>>1;
    // printf("%d", c);
    while (0<b)
    {
        b = b>>1;
        count++;
    }
    printf("%d", count);
    return 0;
}
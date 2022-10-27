#include <stdio.h>
int main()
{
    int a, b, c, d, x;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a<b)
    {
        x = b;
    }
    else
    {
        x = a;
    }
    if (x<c && x<d)
    {
        printf("NO");
    }
    else if(x>c && x>d)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}
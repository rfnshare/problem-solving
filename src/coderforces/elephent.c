#include <stdio.h>
int main()
{
    int x, count = 0;
    scanf("%d", &x);
    x = (x / 5) + (x%5!=0);
    printf("%d\n", x);
}
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a % 3 == 0)
    {
        printf("%d\n", a / 3);
    }
    else
    {
        printf("-1\n");
    }
}
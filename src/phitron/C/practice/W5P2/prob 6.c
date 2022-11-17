#include <stdio.h>
int main()
{
    int a, b, i, j, k;
    scanf("%d", &a);

    if (a % 4 == 0 && a % 100 != 0)
    {
        printf("YES");
    }
    else if (a % 400 == 0 && a % 100 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
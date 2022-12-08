#include <stdio.h>
int main()
{
    int a, b, i, j = 0, k = 1, temp;
    scanf("%d", &a);
    printf("%d ", j);
    printf("%d ", k);
    for (i = 0; i < a - 2; i++)
    {
        printf("%d ", j + k);
        temp = j + k;
        j = k;
        k = temp;
    }
}
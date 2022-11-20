#include <stdio.h>
int main()
{
    int a, b, i, j, k = 0;
    for (i = 1000; i >= 1; i--)
    {
        printf("%d ", i);
        k += 1;
        if (k == 5)
        {
            printf("\n");
            k = 0;
        }
    }
}
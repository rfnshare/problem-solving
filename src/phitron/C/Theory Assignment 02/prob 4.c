#include <stdio.h>
int main()
{
    int n, k, i, j, count = 1, p[100];
    scanf("%d%d", &n, &k);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
            p[count] = i;
            count++;
        }
    }
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d ", i);
            p[count] = i;
            count++;
        }
    }
    printf("\nThe %dth element in this sequence is %d.", k, p[k]);
}
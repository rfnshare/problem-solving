#include <stdio.h>
int main()
{
    int k, n, i, j, sum=0;
    scanf("%d%d", &n, &k);
    for (i = 1; i <= n; i++)
    {
        int floor = i * 100; 
        for (j = 1; j <= k; j++)
        {
            int room = floor + j; 
            sum += room; 
        }
    }
    printf("%d", sum);
}
#include <stdio.h>
int main()
{
    int n, k, a, count=0;
    scanf("%d%d", &n, &k);
    for (int i = 0; i <n; i++)
    {
        scanf("%d", &a);
        if (k<a)
        {
            count++;
        }  
    }
    printf("%d", count);
}
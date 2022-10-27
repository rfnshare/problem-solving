#include <stdio.h>
#include<math.h>
int main()
{
    int n, i=1;
    scanf("%d", &n);
    int r = floor(sqrt(n));
    printf("%d ", i);
    for (i = 2; i <= r; i++)
    {
        if(n%i==0)
        {
            printf("%d %d ", i, n/i);
        }
    }
    printf("%d", n);
}
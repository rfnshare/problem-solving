#include <stdio.h>
int main()
{
    int i, j, N, sum=0;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &j);
        if (j%2!=0)
        {
            sum+=j;
        }
    }
    if (sum%2==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
}
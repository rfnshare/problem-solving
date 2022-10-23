#include <stdio.h>
int main()
{
    int T, i, N;
    scanf("%d", &T);
    for(i=1; i<=T; i++)
    {
        scanf("%d", &N);
        if(N%2==1)
        {
            printf("odd\n");
        }
        else
        {
            printf("even\n");
        }
    }
}
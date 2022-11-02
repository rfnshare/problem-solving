#include <stdio.h>
int main()
{
    int i, j,k, N;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        for (k = 0; k < i; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= N-i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
#include <stdio.h>
int main()
{
    int i, j, N, len;
    scanf("%d", &N);
    char S[N][100];
    for (i = 0; i < N; i++)
    {
        scanf("%s", &S[i]);

    }
    for (i = 0; i < N; i++)
    {
        printf("%s ", S[i]);
    }
}
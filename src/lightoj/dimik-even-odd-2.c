#include <stdio.h>
int main()
{
    int T, i, k;
    char N[101];
    scanf("%d", &T);

    for (i = 1; i <= T; i++)
    {
        scanf("%s", &N);
        k = strlen(N);
        // printf("%d",N[k-1]);
        if (N[k - 1] % 2 == 1)
        {
            printf("odd\n");
        }
        else
        {
            printf("even\n");
        }
    }
}
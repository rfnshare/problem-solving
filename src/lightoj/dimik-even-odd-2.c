#include <stdio.h>
int main()
{
    int T, i;
    long long int N[101];
    scanf("%d", &T);

    for (i = 1; i <= T; i++)
    {
        scanf("%d", &N);
        if (N[0] % 2 == 1)
        {
            printf("odd\n");
        }
        else
        {
            printf("even\n");
        }
    }
}
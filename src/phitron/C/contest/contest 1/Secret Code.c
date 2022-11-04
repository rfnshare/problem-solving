#include <stdio.h>
int main()
{
    int i, j, T, N[100000], r;
    scanf("%d", &T);
    if (0 < T && T <= 100)
    {
        for (i = 0; i < T; i++)
        {
            scanf("%d", &N[i]);
        }
        for (i = 0; i < T; i++)
        {
            if (0 < N[i])
            {
                if (N[i] == 1)
                {
                    printf("No\n");
                }
                else if (N[i] == 2 || N[i] == 3)
                {
                    printf("Yes\n");
                }

                r = sqrt(N[i]);
                for (j = 2; j <= r; j++)
                {
                    if (N[i] % j == 0)
                    {
                        printf("No\n");
                        break;
                    }
                    else if (j == r)
                    {
                        printf("Yes\n");
                    }
                }
            }
        }
    }
}
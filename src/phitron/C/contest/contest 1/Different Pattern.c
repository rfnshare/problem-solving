#include <stdio.h>
int main()
{
    int i, j, N;
    scanf("%d", &N);
    if (1 <= N && N <= 20)
    {
        for (i = 1; i <= N; i++)
        {

            printf("%d ", i);

            for (j = i; 1 <= j; j--)
            {

                if (0 < j - 1)
                {
                    printf("%d ", j - 1);
                }
            }
            printf("\n");
        }
    }
}
#include <stdio.h>
int main()
{
    int i, j, N, T, charge[100], a, b;
    scanf("%d", &T);
    if (1 <= T && T <= 101)
    {
        for (i = 0; i < T; i++)
        {
            scanf("%d%%", &charge[i]);
        }
        for (i = 0; i < T; i++)
        {
            if (charge[i] < 60)
            {
                a = 60 - charge[i];
                b = (a * 1) + (20 * 2) + (20 * 3);
                printf("%d minutes\n", b);
            }
            else if (charge[i] < 80)
            {
                a = 80 - charge[i];
                b = (a * 2) + (20 * 3);
                printf("%d minutes\n", b);
            }
            else
            {
                a = 100-charge[i];
                b = a*3;
                printf("%d minutes\n", b);
            }
        }
    }
}
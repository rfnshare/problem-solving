#include <stdio.h>
int main()
{
    int m = 24, n = 0;
    scanf("%d%d", &n, &m);
    // if (n < m)
    // {
    //     for (i = n; n <= m; n++)
    //     {
    //         printf("%d ", n);
    //     }
    // }
    if (n < m)
    {
        while (n <= m)
        {
            printf("%d ", n);
            n++;
        }
    }
    else
    {
        while (n >= m)
        {

            printf("%d ", n);
            n++;

            if (n > 23)
            {
                n = 0;

            }
        }
        while (n <= m)
        {
            printf("%d ", n);
            n++;
        }
    }
}
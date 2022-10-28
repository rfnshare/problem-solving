#include <stdio.h>
int main()
{
    int n, m, count = 0;
    scanf("%d%d", &n, &m);

    for (int i = 1; i <= n; i++)
    {

        if (i % 2 != 0)
        {
            count++;
            if (count == m)
            {
                printf("%d ", i);
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {

        if (i % 2 == 0)
        {
            count++;
            if (count == m)
            {
                printf("%d ", i);
            }
        }
    }
}
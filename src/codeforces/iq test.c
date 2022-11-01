#include <stdio.h>
int main()
{
    int i, j, a, b, n, task[101], e_count = 0, o_count = 0;
    scanf("%d", &n);
    if (3 <= n && 100 >= n)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%d", &task[i]);
        }
    }
    for (j = 0; j < n; j++)
    {
        if (task[j] % 2 == 0)
        {
            e_count++;
            a = j;
        }
        else
        {
            o_count++;
            b = j;
        }
    }
    if (1 == e_count)
    {
        printf("%d", a+1);
    }
    else if (o_count == 1)
    {
        printf("%d", b+1);
    }
}
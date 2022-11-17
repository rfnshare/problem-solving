#include <stdio.h>
int main()
{
    int a, b, i, j, k, count = 0, p[100], q = 0, max = 0;
    char n[100];
    scanf("%d", &a);
    scanf("%s", &n);
    for (i = 0; i < a; i++)
    {
        if (n[i] == n[i + 1])
        {
            count++;
        }
        else
        {
            p[q] = count;
            q += 1;
            count = 0;
        }
    }
    for (int i = 0; i < q; i++)
    {

        if (p[i] > max)
        {
            max = p[i];
        }
    }
    printf("%d\n", max + 1);
}
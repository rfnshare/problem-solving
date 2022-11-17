#include <stdio.h>
int main()
{
    int a, b, i, j, k = 0, p[1000], q = 0;
    char ch[100][1000];
    scanf("%d", &a);

    for (i = 0; i < a; i++)
    {
        scanf("%d", &b);
        for (j = 0; j < b; j++)
        {
            scanf(" %c", &ch[i][j]);
        }
        p[q] = b;
        q += 1;
    }
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < p[i] - 1; j++)
        {
            if (ch[i][j] == '0' && ch[i][j + 1] == '1')
            {
                k += 1;
            }
            else if (ch[i][j] == '1' && ch[i][j + 1] == '0')
            {
                k += 1;
            }
        }
        printf("%d\n", k);
        k = 0;
    }
}
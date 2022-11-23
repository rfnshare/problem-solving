#include <stdio.h>
int main()
{
    int a, b, i, j, k;
    char ch[100][100];
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        scanf("%s", &ch[i]);
    }
    for (i = 0; i < a; i++)
    {
        printf("%s ", ch[i]);
    }
}
#include <stdio.h>
int main()
{
    int n, i, j;
    char Str[101];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", &Str);
        for (j = 0; Str[j] != '\0'; ++j)
            ;
        if (10 < j)
        {
            j -= 2;
            printf("%c%d%c\n", Str[0], j, Str[j+1]);
        }
        else
        {
            printf("%s\n", Str);
        }
    }
}
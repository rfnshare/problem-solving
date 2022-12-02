#include <stdio.h>
int main()
{
    int a, b, i, j, k;
    char ch[100];
    scanf("%s", &ch);
    for (i = 0; i < strlen(ch); i++)
    {
        if (i % 2 == 0)
        {
            printf("%c", ch[i]);
        }
        else
        {
            printf("%c%c", ch[i], ch[i]);
        }
    }
}
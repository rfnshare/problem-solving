#include <stdio.h>

int main()
{
    int a, b, i, j, k;
    char ch[100];
    gets(ch);

    for (i = 0; i < strlen(ch); i++)
    {
        if (ch[i] >= 'a' && 'z' >= ch[i])
        {
            ch[i] -= 32;
        }
        else if (ch[i] >= 'A' && 'Z' >= ch[i])
        {
            ch[i] += 32;
        }
        printf("%c", ch[i]);
    }
}
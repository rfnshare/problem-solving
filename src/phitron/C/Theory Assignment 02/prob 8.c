#include <stdio.h>
int main()
{
    int a, b, i, j, k;
    char ch[100], temp;
    scanf("%s", &ch);
    scanf("%d", &a);
    for (i = 0; i < strlen(ch); i++)
    {
        temp = ch[i];
        ch[i] += a;
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            printf("%c", ch[i]);
        }
        else
        {
            j = 122 - temp;
            k = a - j;
            ch[i] = k + 96;
            printf("%c", ch[i]);
        }
    }
}
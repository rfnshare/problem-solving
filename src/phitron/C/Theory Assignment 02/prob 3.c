#include <stdio.h>
int is_present(char ch[], char c);
int main()
{
    int a, b, c;
    char ch[100];
    scanf("%s", &ch);
    a = is_present(ch, '1');
    b = is_present(ch, '9');
    c = is_present(ch, '7');

    if (a + b + c == 3)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
int is_present(char ch[], char c)
{
    int i, flag;

    for (i = 0; i < strlen(ch); i++)
    {
        if (ch[i] == c)
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
    }
    return flag;
}
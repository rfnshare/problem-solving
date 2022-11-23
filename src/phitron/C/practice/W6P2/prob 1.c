#include <stdio.h>
int is_binary(char ch[]);
int main()
{
    int a;
    char ch[100];
    scanf("%s", &ch);
    a = is_binary(ch);
    if (a == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}

int is_binary(char ch[])
{
    int flag = 1, i;
    for (i = 0; i < strlen(ch); i++)
    {

        if (ch[i] == '0')
        {
            flag = 1;
        }
        else if (ch[i] == '1')
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
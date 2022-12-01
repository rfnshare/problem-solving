#include <stdio.h>
void solve(char ch[]);
int main()
{
    int a, b, i, j, k;
    char ch[100];
    scanf("%s", &ch);
    solve(ch);
}
void solve(char ch[])
{
    int i, temp;
    for (i = 0; i < strlen(ch); i++)
    {
        temp = ch[i];
        if (temp % 2 == 0)
        {
            ch[i] -= 32;
        }
        temp = 0;
    }
    printf("%s", ch);
}
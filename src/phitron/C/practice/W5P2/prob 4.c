#include <stdio.h>
int main()
{
    int a, b = 0, i, j, k;
    char s[100], s1[100];
    scanf("%s", &s);
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == s[i + 1])
        {
            continue;
        }
        else
        {
            printf("%c", s[i]);
        }
    }
   
}
#include <stdio.h>
int main()
{
    int a, b=0, i, j, k;
    char s[100], s1[100];
    scanf("%s", &s);
    for (i = 0; i < strlen(s) - 1; i++)
    { 
        for (j = i; j < strlen(s); j++)
        {
            if (s[i] == s[j + 1])
            {
                s[j + 1] = '.';
            }
        }
    }
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i]!='.')
        {
            printf("%c", s[i]);
        }
        
    }
}
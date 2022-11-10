#include <stdio.h>
int main()
{
    int i, j, N, len=0, t=0, flag=1;
    char S[20];
    scanf("%s", &S);
    for (i = 0; S[i] != '\0'; i++)
    {
        len++;
    }
    for (i = len-1; i >= 0; i--)
    {
        if (S[i]==S[t])
        {
            t+=1;
            continue;
        }
        else
        {
            flag = 0;
        }
    }
    if (flag==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    
}
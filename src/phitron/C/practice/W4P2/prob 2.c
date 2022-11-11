#include <stdio.h>
int main()
{
    int i, j, N, len, flag = 1;
    char S[20];
    scanf("%s", &S);
    for (i = 0; S[i] != '\0'; i++)
    {
        if (S[i] != '0' && S[i] != '1')
        {
            flag = 0;
            break;
        }
        else
        {
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}
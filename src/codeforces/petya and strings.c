#include <stdio.h>
int main()
{
    int i, j, N, flag = 0;
    char S[102], S2[102];
    fgets(S, sizeof(S), stdin);
    fgets(S2, sizeof(S2), stdin);
    for (i = 0; S[i] != '\0'; i++)
    {
        if (S[i] >= 'A' && S[i] <= 'Z')
        {
            S[i] += 32;
        }
    }
    for (i = 0; S2[i] != '\0'; i++)
    {
        if (S2[i] >= 'A' && S2[i] <= 'Z')
        {
            S2[i] += 32;
        }
    }
    for (i = 0; i < strlen(S); i++)
    {
        // printf("%c %c ", S[i], S2[i]);
        if (S[i] < S2[i])
        {
            flag = -1;
            break;
        }
        else if (S[i] > S2[i])
        {
            flag = 1;
            break;
        }

        else
        {
            flag = 0;
        }
    }
    if (flag == 1)
    {
        printf("1\n");
    }
    else if (flag == -1)
    {
        printf("-1\n");
    }
    else
    {
        printf("0\n");
    }
}
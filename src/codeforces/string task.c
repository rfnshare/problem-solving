#include <stdio.h>
int main()
{
    int i, j, N;
    char S[120];
    scanf("%s", &S);
    for (i = 0; S[i] != '\0'; i++)
    {
        if (S[i] >= 'A' && S[i] <= 'Z')
        {
            S[i] += 32;
        }
    }
    for (i = 0; S[i] != '\0'; i++)
    {
        if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u' || S[i] == 'y')
        {
            continue;
        }
        else
        {
            printf(".%c", S[i]);
        }
    }
}
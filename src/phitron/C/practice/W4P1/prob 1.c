#include <stdio.h>
int main()
{
    int i, j, N, count = 0, t[100], v = 0, len = 0, temp;
    char S[20], u[100], tempc;
    scanf("%s", S);
    for (i = 0; S[i] != '\0'; i++)
    {
        len++;
    }

    for (i = 0; i < len; i++)
    {
        if (S[i] == S[i + 1])
        {
            count++;
        }
        else
        {
            t[v] = count + 1;
            u[v] = S[i];
            v += 1;
            count = 0;
        }
    }

    for (i = 0; i < v - 1; i++)
    {

        if (t[i] >= t[i + 1])
        {
            continue;
        }
        else
        {
            temp = t[i];
            tempc = u[i];
            t[i] = t[i + 1];
            u[i] = u[i + 1];
            t[i + 1] = temp;
            u[i + 1] = tempc;
            i = -1;
                }
    }
    for (i = 0; i < v; i++)
    {
        for (j = 0; j < t[i]; j++)
        {
            printf("%c", u[i]);
        }
    }
}
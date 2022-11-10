#include <stdio.h>
int main()
{
    int i, j, N, v_count = 0, c_count = 0;
    char S[20];
    scanf("%s", &S);
    for (i = 0; S[i] != '\0'; i++)
    {
        if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u')
        {
            v_count++;
        }
        else
        {
            c_count++;
        }
    }

    printf("Vowel -%d\n", v_count);
    printf("Consonant -%d", c_count);
}
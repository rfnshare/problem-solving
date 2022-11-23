#include <stdio.h>
int is_vowel(char x); // Defining Function Phototype
int is_vowel(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a, m, t;
    char ch;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf(" %c", &ch);
        m = is_vowel(ch);
        if (m == 1)
        {
            printf("Vowel\n");
        }
        else
        {
            printf("Consonant\n");
        }
    }
}
#include <stdio.h>
int main()
{
    int a, b, sum = 0;
    char s[20];
    scanf("%s", &s);
    scanf("%d%d", &a, &b);
    for (int j = 0; j < strlen(s); j++)
    {
        if (s[j] == '+')
        {
            sum += a + b;
        }
        else if (s[j] == '*')
        {
            sum += a * b;
        }
    }
    printf("%d", sum);
}
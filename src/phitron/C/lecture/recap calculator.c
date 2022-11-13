#include <stdio.h>
int main()
{
    int a, b, r;
    char ch;
    scanf("%d%d", &a, &b);
    scanf(" %c", &ch);
    if (ch == '+')
    {
        r = a + b;
    }
    else if (ch == '-')
    {
        r = a - b;
    }
    else if (ch == '*')
    {
        r = a * b;
    }
    else if (ch == '/')
    {
        r = a / b;
    }
    else
    {
        printf("Invalid");
    }
    printf("%d", r);
}
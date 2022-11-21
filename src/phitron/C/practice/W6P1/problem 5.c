#include <stdio.h>
int calc(int a, int b, char ch);
int main()
{
    int a, b, ch, result;
    scanf("%c", &ch);
    scanf("%d%d", &a, &b);
    result = calc(a, b, ch);
    printf("%d", result);
}
int calc(int a, int b, char ch)
{
    if (ch == '+')
    {
        return a + b;
    }
    else if (ch == '-')
    {
        return a - b;
    }
    else if (ch == '*')
    {
        return a * b;
    }
    else if (ch == "/")
    {
        return a / b;
    }
    else
    {
        return 0;
    }
}
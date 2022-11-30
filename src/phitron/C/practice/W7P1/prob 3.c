#include <stdio.h>
int main()
{
    int a = 1, i, sum = 0, count = 0, flag = 0;
    char ch[100];
    scanf("%s", &ch);
    for (i = 0; i < strlen(ch); i++)
    {
        sum += (ch[i] - 96);
    }
    while (a <= sum)
    {
        a *= 2;
        count++;
        if (a == sum)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("YES\n");
        printf("cost = 2^%d", count);
    }
    else
    {
        printf("NO");
    }
}
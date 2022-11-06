#include <stdio.h>
int main()
{
    char st[20];
    int count = 0;
    // scanf("%s", st);
    // gets(st);
    fgets(st, sizeof(st), stdin);
    for (int i = 0; i < 20; i++)
    {
        if (st[i] == '\0')
        {
            break;
        }
        else
        {
            if (st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u')
            {
                printf("%c\n", st[i]);
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}
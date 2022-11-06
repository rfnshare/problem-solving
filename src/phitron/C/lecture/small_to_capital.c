#include <stdio.h>
int main()
{
    char st[20];
    int count = 0;
    fgets(st, sizeof(st), stdin);
    for (int i = 0; st[i] != '\0'; i++)
    {
        if (st[i] > 'a' && st[i] < 'z')
        {
            st[i] -= 32;
        }
    }
    puts(st);
    return 0;
}
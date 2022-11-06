#include <stdio.h>
int main()
{
    char st[1000];
    int count = 0;
    fgets(st, sizeof(st), stdin);
    for (int i = 0; i < 1; i++)
    {
        if (st[i] >= 'a' && st[i] <= 'z')
        {
            st[i] -= 32;
        }
    }
    puts(st);
    return 0;
}
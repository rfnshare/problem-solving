#include <stdio.h>
int main()
{
    int i, j, n, count = 0;
    scanf("%d", &n);
    char s[n];
    scanf("%s", &s);

    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = 0; j < n; j++)
        {
            // checking if two characters are equal
            if (s[i] == s[j] && i != j)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            count++;
    }
    printf("%d", count);
}
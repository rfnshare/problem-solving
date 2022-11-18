#include <stdio.h>
int main()
{
    int n, i, j, length, flag = 0;
    char Str[200];
    scanf("%d", &n);
    if (0 < n)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%s", &Str);
            length = strlen(Str);

            if (0 < length)
            {
                for (j = 0; j < length; j++)
                {
                    if (Str[j] != Str[length - j - 1])
                    {
                        flag = 1;
                        break;
                    }
                }

                if (flag)
                {
                    printf("Case #1: Not Palindrome\n");
                }
                else
                {
                   
                    if (7 < length)
                    {
                        length -= 2;
                        printf("Case #2: %c%d%c\n", Str[0], length, Str[length+1]);
                    }
                    else
                    {
                        printf("Case #3: %s\n", Str);
                    }
                }
            }
        }
    }
}
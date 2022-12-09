#include <stdio.h>
void swap(char *p, char *q);
int main()
{
    int i, j;
    char ch[50];
    scanf("%s", &ch);
    for (j = 0; j < strlen(ch); j++)
    {
        for (i = 0; i < strlen(ch) - 1; i++)
        {
            if (ch[i] > ch[i + 1])
            {
                swap(&ch[i], &ch[i + 1]);
                printf("%s\n", ch);
            }
                }
    }
    printf("%s", ch);
}
void swap(char *p, char *q)
{
    char temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
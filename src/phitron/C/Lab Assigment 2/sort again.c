#include <stdio.h>
char* solve(char ch[]);
int swap(int *a, int *b);
int main()
{
    int a, b, i, j, k;
    char ch[100];
    scanf("%s", &ch);
    printf("%s", solve(ch));
}
char* solve(char ch[])
{
    int i, j, t1, t2, temp;
    for (i = 0; i < strlen(ch); i++)
    {
        for (j = 0; j < strlen(ch) - 1; j++)
        {
            t1 = ch[j];
            t2 = ch[j + 1];
            if (t1 < t2)
            {
                swap(&t1, &t2);

                ch[j] = t1;
                ch[j + 1] = t2;
            }
            else
            {
                continue;
            }
        }
    }
    return ch;
}
int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
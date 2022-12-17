#include <stdio.h>
int solve(int a);
int main()
{
    int i, t;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        solve(i);
    }
}
int solve(int a)
{
    int size, find, i, flag = 0;
    scanf("%d", &size);
    int values[size];
    for (i = 0; i < size; i++)
    {
        scanf("%d", &values[i]);
    }
    scanf("%d", &find);
    for (i = 0; i < size; i++)
    {
        if (values[i] == find)
        {
            printf("Case %d: %d", a + 1, i + 1);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Case %d: Not Found", a + 1);
    }
    printf("\n");
}
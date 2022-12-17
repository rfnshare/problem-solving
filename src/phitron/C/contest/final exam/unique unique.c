#include <stdio.h>
int main()
{
    int i, j, n, count = 0, arr[999];
    scanf("%d", &n);
    char s[n];
    scanf("%s", &s);

    for (i = 0; i < n; i++)
    {
        arr[s[i]] = count+1;
    }
    printf("%d", arr[117]);
}
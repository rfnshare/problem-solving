#include <stdio.h>
int main()
{
    int i, j, k, N, arr[100];
    char boo[10];
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (j = 0; j < N; j++)
    {
        if (arr[j]==arr[0])
        {
            strcpy(boo, "YES");
        }
        else
        {
            strcpy(boo, "NO");
            break;
        }
    }
    printf("%s", boo);
   
}
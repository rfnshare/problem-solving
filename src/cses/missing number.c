#include <stdio.h>
int main()
{
    int N, x;
    int arr[300000];
    scanf("%d", &N);

    for (int i = 1; i < N; i++)
    {
        scanf("%d", &x);
        arr[x] = 1;
    }
    for (int i = 1; i <= N; i++)
    {
        if (arr[i]==0)
        {
            printf("%d", i);
            break;
        }
    }  
}
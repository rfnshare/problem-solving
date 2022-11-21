#include <stdio.h>
int fun(int x);
int main()
{
    int a;
    scanf("%d", &a);
    int b = fun(a);
    printf("Sum = %d", b);
}
int fun(int x)
{
    int i, j, k = 0, arr[100];
    for (i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
        k += arr[i] % 10;
        for (j = 0; j < 3; j++)
        {
            arr[i] = arr[i] / 10;
        }
        k += arr[i];
    }
    return k;
}
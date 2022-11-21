#include <stdio.h>
int main()
{
    int a, b, i, j, k = 0, arr[100];
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
        k += arr[i] % 10;
        for (j = 0; j < 3; j++)
        {
            arr[i] = arr[i] / 10;
        }
        k += arr[i];
    }
    printf("Sum = %d", k);
}
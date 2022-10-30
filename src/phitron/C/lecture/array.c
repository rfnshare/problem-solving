#include <stdio.h>
int main()
{
    int arr[20];
    // arr[6] = 75;
    // arr[0] = 29;
    // arr[2] = arr[6] + arr[0];
    // printf("%d", arr[2]);
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d-th position value = %d\n", i, arr[i]);
    }
}
#include <stdio.h>
int main()
{
    int arr[20];
    arr[6] = 75;
    arr[0] = 29;
    arr[2] = arr[6] + arr[0];
    printf("%d", arr[2]);
}
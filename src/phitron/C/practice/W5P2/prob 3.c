#include <stdio.h>
int main()
{
    int a, b, i, j, k, sum = 0;
    scanf("%d", &a);
    int arr[a];
    for (i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < a; i++)
    {
        sum += (arr[i]%10);
    }
    printf("Sum = %d", sum);
}
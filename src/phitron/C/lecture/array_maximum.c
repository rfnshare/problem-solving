#include <stdio.h>
int main()
{
    int N=6;
    int arr[N] ;
    int max = 0;
    int min = arr[0];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("Maximum value is %d\n", max);
    printf("Minimum value is %d\n", min);
}
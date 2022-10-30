#include <stdio.h>
int main()
{
    int N, even_count = 0, odd_count = 0;
    int arr[100];
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            even_count++;
        }
        else
            odd_count++;
        
    }
    printf("Even count is %d\n", even_count);
    printf("Odd count is %d\n", odd_count);
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int *ptr;

    // ptr = (int *)malloc(n * sizeof(int));
    ptr = (int *)calloc(n, sizeof(int)); // better version of malloc

    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
    free(ptr);
}
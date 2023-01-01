#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, i, j, k;
    a = 5;
    int *ptr;
    ptr = (int *)malloc(a * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory Exceed");
    }
    else
    {
        for (i = 0; i < a; i++)
        {
            scanf("%d", (ptr + i));
        }
        for (i = 0; i < a; i++)
        {
            printf("%d ", ptr[i]);
        }
    }
    a = 10;
    if (ptr == NULL)
    {
        printf("Memory Exceed");
    }
    else
    {
        ptr = realloc(ptr, a * sizeof(int));
        for (i = 5; i < a; i++)
        {
            scanf("%d", (ptr + i));
        }
        for (i = 0; i < a; i++)
        {
            printf("%d ", ptr[i]);
        }
    }
    free(ptr);
}
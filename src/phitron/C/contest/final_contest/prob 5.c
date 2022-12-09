#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, i;
    scanf("%d", &a);
    int *p;
    p = (int *)(malloc(a * sizeof(int)));

    if (p == NULL)
    {
        printf("Memory ERROR!");
    }
    else
    {
        for (i = 0; i < a; i++)
        {
            scanf("%d", (p + i));
        }
        for (i = 0; i < a; i++)
        {
            printf("%d ", *(p + i));
        }
    }
}
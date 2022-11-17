#include <stdio.h>
int main()
{
    int a, b, i, j, k;
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        for(k=0;k<a-i;k++)
        {
            printf(" ");
        }
        for (j = 0; j < a; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
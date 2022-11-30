#include <stdio.h>
void pattern(int a);
int main()
{
    int a,i;
    scanf("%d", &a);
    for(i=1;i<=a;i++)
    {
        pattern(i);
    }
    return 0;
}
void pattern(int a)
{
    int b, i, j, k;
    for (i = 0; i < a; i++)
    {
        printf("#");
    }
    printf("\n");
}
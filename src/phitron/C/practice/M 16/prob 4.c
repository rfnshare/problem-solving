#include <stdio.h>
int main()
{
    int a, b;
    printf("Input hours : ");
    scanf("%d", &a);
    printf("Input minutes : ");
    scanf("%d", &b);
    printf("Total : %d minutes.", a*60+b);
}
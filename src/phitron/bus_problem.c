#include<stdio.h>

int main()
{
    int n,w, sum=0;;
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        scanf("%d", &w);
        sum += w;
    }
    printf("Sum of weights %d", sum);
}
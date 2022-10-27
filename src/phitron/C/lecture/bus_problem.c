#include<stdio.h>

int main()
{
    int n,w, sum=0;;
    scanf("%d", &n);
    int i = 1;
    while (i<=n)
    {
        scanf("%d", &w);
        sum += w;
        ++i;
    }
    
    printf("Sum of weights %d", sum);
}
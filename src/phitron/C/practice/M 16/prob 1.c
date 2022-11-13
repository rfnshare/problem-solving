#include <stdio.h>
int main()
{
    int a, b;
    printf("Input numerator : ");
    scanf("%d", &a);
    printf("Input denominator : ");
    scanf("%d", &b);
    printf("quotient = %d, reminder = %d", a / b, a % b);
}
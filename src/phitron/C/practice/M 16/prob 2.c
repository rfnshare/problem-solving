#include <stdio.h>
int main()
{
    int a, b;
    printf("Input 1st number (positive or negative): ");
    scanf("%d", &a);
    printf("Input 1st number (positive or negative): ");
    scanf("%d", &b);
    printf("The absolute value of 1st number is : %d\n", abs(a));
    printf("The absolute value of 2nd number is : %d", abs(b));
}
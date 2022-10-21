#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Three Whole Number: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("Sum of %d + %d + %d = %d\n", a, b, c, a + b + c);
    printf("Average of (%d + %d + %d)/3 = %d", a, b, c, (a + b + c )/ 3);
}
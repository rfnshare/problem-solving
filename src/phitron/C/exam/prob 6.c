#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter the first number: "); // 39
    scanf("%d", &m);
    printf("Enter the second number: "); // 13
    scanf("%d", &n);
    if (m % n == 0)
    {
        printf("The first number is divisible by the second number.");
    }
    else if (n % m == 0)
    {
        printf("The second number is divisible by the first number.");
    }
    else
    {
        printf("None of them are divisible by the other.");
    }
}
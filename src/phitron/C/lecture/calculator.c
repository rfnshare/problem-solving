#include <stdio.h>
int main()
{
    char c;
    float a, b, result;
    printf("Enter Two Number: ");
    scanf("%f%f", &a, &b);
    printf("What do you want? Chose +,-,*,/: ");
    scanf(" %c", &c);
    switch (c)
    {
    case '*':
        result = a * b;
        printf("Multiplication is %.2f", result);
        break;
    case '/':
        result = a / b;
        printf("Division is %.2f", result);
        break;
    case '+':
        result = a + b;
        printf("Addition is %.2f", result);
        break;
    case '-':
        result = a - b;
        printf("Subtraction is %.2f", result);
        break;
    }
}

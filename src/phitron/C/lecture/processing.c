#include<stdio.h>

int main()
{
    // How to take input?
    int a,b;
    printf("Enter two number: ");
    scanf("%d%d", &a, &b);

    // Sum
    int sum;
    sum = a + b;
    printf("The sum of the two numbers is %d", sum);
    return 0;

}

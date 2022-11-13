#include <stdio.h>
int main()
{
    float a, b;
    printf("Input the height of the Rectangle : ");
    scanf("%f", &a);
    printf("Input the width of the Rectangle : ");
    scanf("%f", &b);
    printf("Perimeter of the Rectangle is : %f", 2*(a+b));
}
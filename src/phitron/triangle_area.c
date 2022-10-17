#include<stdio.h>
// calculate the area of triangle
int main()
{
    int base, height;
    printf("Enter the base & height of trianle: ");
    scanf("%d%d", &base, &height);
    int area;
    area = 0.5 * base * height;
    printf("The are of the triangle is %d", area);

    return 0;

}



#include<stdio.h>
#include<math.h>>
// calculate the area of triangle
int main()
{
    int base, one, two;
    printf("Enter the base & two parameters of triangle: ");
    scanf("%d%d%d", &base, &one, &two);
    int area, height;
    height = sqrt(pow(two,2) + pow((base/2), 2));
    printf("The height of the triangle is %d\n", height);
    area = 0.5 * base * height;
    printf("The area of the triangle is %d", area);

    return 0;

}




#include<stdio.h>
#define PI 3.1416
// calculate the area of circle
int main()
{
    int radius;
    printf("Enter the radius of circle: ");
    scanf("%d", &radius);
    float area;
    area = PI * radius * radius;
    printf("The are of the circle is %f", area);

    return 0;

}


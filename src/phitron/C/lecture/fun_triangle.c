#include <stdio.h>
int take_radius()
{
    int r;
    printf("Enter the radius of a circle: ");
    scanf("%d", &r);
    return r;
}
float calculate_area(int r)
{
    float res = r * r * 3.14159;
    printf("Area of the circle %f", res);
}
int main()
{
    int r;
    r = take_radius();
    calculate_area(r);
    return 0;
}
#include <stdio.h>
#define PI 3.1416
float circle_area(int a);
int main()
{
    int r;
    scanf("%d", &r);
    printf("%f", circle_area(r));
}
float circle_area(int r)
{
    float area;
    area = PI * r * r;
    return area;
}
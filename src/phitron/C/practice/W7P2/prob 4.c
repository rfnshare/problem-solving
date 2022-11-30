#include<stdio.h>
#define PI 3.1416
int circle_area(int a);
int main()
{
    int r;
    scanf("%d", &r);
    printf("%d", circle_area(r));
}
int circle_area(int r)
{
    int area;
    area = PI*r*r;
    return area;
}
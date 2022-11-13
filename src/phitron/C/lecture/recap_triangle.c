#include <stdio.h>
int main()
{
    int a, b, c;
    float s;
    scanf("%d%d%d", &a, &b, &c);
    s = (a + b + c) / 2.0;
    printf("%f\n", s);

    double area;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("%f\n", area);
}
#include <stdio.h>
struct point
{
    float x;
    float y;
};
struct point mid(struct point p1, struct point p2);
int main()
{
    int a, b, i, j, k;
    struct point p1, p2;
    scanf("%f%f", &p1.x, &p1.y);
    scanf("%f%f", &p2.x, &p2.y);

    struct point p3;
    p3 = mid(p1, p2);
    printf("%0.2f %0.2f", p3.x, p3.y);
}
struct point mid(struct point p1, struct point p2)
{
    struct point ans;
    ans.x = (p1.x + p2.x) / 2;
    ans.y = (p1.y + p2.y) / 2;
    return ans;
}

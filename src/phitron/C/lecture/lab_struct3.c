#include <stdio.h>
struct point
{
    float x;
    float y;
};
struct triangle
{
    struct point A;
    struct point B;
    struct point C;
};
struct point centroid(struct triangle);
int main()
{
    int a, b, i, j, k;
    struct point p1, p2, p3;
    scanf("%f%f", &p1.x, &p1.y);
    scanf("%f%f", &p2.x, &p2.y);
    scanf("%f%f", &p3.x, &p3.y);
    struct triangle t = {p1, p2, p3};
    struct point c = centroid(t);
    printf("%0.2f %0.2f", c.x, c.y);
}
struct point centroid(struct triangle t)
{
    struct point ans;
    ans.x = (t.A.x + t.B.x + t.C.x) / 3;
    ans.y = (t.A.y + t.B.y + t.C.y) / 3;
    return ans;
}

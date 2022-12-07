#include <stdio.h>
struct point
{
    int x;
    int y;
};
int manhattan(struct point p1, struct point p2);
int main()
{
    int a, b, i, j, k;
    struct point p1, p2;
    scanf("%d%d", &p1.x, &p1.y);
    scanf("%d%d", &p2.x, &p2.y);

    int ans = manhattan(p1, p2);
    printf("%d", ans);
}
int manhattan(struct point p1, struct point p2)
{
    return abs(p1.x - p2.x) + abs(p1.y - p2.y);
}
#include <stdio.h>
char grade_calc(int x);
int main()
{
    int a, b, i, j, k;
    char result;
    scanf("%d", &a);
    result = grade_calc(a);
    printf("%c", result);
}
char grade_calc(int x)
{
    if (80 <= x && 100 >= x)
    {
        return 'A';
    }
    else if (60 <= x && 79 >= x)
    {
        return 'B';
    }
    else if (40 <= x && 69 >= x)
    {
        return 'C';
    }
    else
    {
        return 'F';
    }
}
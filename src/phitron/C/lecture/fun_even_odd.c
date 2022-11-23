#include <stdio.h>
int is_even(int x); // Defining Function Phototype
int is_even(int x)
{
    if (x % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a, b, c, m, t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &a);
        m = is_even(a);
        if (m == 1)
        {
            printf("Even\n");
        }
        else
        {
            printf("Odd\n");
        }
    }
}
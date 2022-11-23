#include <stdio.h>
int add_them(int x[], int y); // Defining Function Phototype
int add_them(int x[], int y)
{
    int sum = 0;
    for (int i = 0; i < y; i++)
    {
        sum += x[i];
    }
    return sum;
}
int main()
{
    int a, b, m, t;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        // scanf("%d%d", &a, &b);
        m = add_them(arr, 8);
        printf("%d\n", m);
    }
}
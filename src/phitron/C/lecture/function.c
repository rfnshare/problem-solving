#include <stdio.h>

int myFunction(int q)
{
    printf("Pera Nai! Chill!\n");
    return 6 * q;
}
int mySum(int p, int q)
{
    printf("Pera Nai! Chill!\n");
    return p + q;
}
int main()
{
    // int row, b, i, j, k;
    // int x = myFunction(10);
    // printf("Hello World %d", x);
    int sum = mySum(10, 15);
    printf("Hello World %d", sum);
    return 0;
}
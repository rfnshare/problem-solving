#include <stdio.h>
int main()
{
    int a = 5, b = 13;
    // Write code here
    int c = a;
    a = b;
    b = c;
    // End of code
    printf("%d and %d", a, b);
}
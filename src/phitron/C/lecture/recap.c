#include <stdio.h>
int main()
{
    unsigned int a = 17; // declaration
    int b = 7;           // initialization

    float c = 7.5;
    double x = 8.99231;
    char y = 'a';

    int hexa = 17;
    int oct = 16;

    double i = 8.97278;
    printf("%u, %d, %f, %lf, %c\n", a, b, c, x, y);
    printf("%o, %x\n", hexa, oct); // octal, hexa

    // work with float
    printf("%0.5lf\n", i);
    printf("%0.4lf\n", i);
    printf("%0.3lf\n", i);
    printf("%0.2lf\n", i);
    printf("%0.1lf\n", i);

    return 0;
}
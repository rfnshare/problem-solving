#include <stdio.h>
int g = 8;
void add_two_nums()
{
    int g=13;
    printf("Calling from Sub Function %d\n", g);
    g++;
}

int main()
{
    int a, b, i, j, k;
    int g = 21;
    add_two_nums();
    printf("Calling from Main Function %d\n", g);
    {
        extern int g;
        printf("Calling from Main in exctern Function %d\n", g);
    }
    return 0;
}
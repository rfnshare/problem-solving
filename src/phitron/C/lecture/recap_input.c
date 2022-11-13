// scanf() normal input
// getchar() for char input
// gets() for string input 
// fgets() for string input advanced 
// fscanf() for file input
#include <stdio.h>
int main()
{
    int a;
    float b;
    char ch, ch2;

    // scanf("%d", &a);
    // scanf("%f", &b);
    //scanf("%d,%f", &a, &b);
    // scanf("%c ", &ch);
    // scanf("%c", &ch2);
    // printf("%d %f", a, b);
    ch = getchar();
    getchar();
    ch2 = getchar();
    printf("%c %d", ch, ch2);
    return 0;
}
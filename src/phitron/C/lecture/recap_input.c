// scanf()
// getchar()
// gets()
// fgets()
// fscanf()
#include <stdio.h>
int main()
{
    int a;
    float b;
    char ch, ch2;

    // scanf("%d", &a);
    // scanf("%f", &b);
    //scanf("%d,%f", &a, &b);
    scanf("%c ", &ch);
    scanf("%c", &ch2);
    // printf("%d %f", a, b);
    printf("%c %c", ch, ch2);
    return 0;
}
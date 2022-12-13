#include <stdio.h>
int main()
{
    int a, sum = 0, i;
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        int b;
        scanf("%d", &b);
        sum += b;
    }
    printf("Sum -> %d", sum);
    return 0;
}
// lec_cm.exe < input.txt > output.txt
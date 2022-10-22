#include <stdio.h>

int main()
{
    int i = 1, sum = 0;
    while (i <=5)
    {
        printf("%d\n", i);
        sum += i;
        i++;
    }
    printf("Sum %d",sum);

    return 0;
}
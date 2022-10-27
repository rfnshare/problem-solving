#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d%d", &a, &b);

    if (a<b)
    {
        printf("You can booked your profit amount : %d", b-a);
    }
    else if(b<a)
    {
        printf("You can booked your loss amount : %d", a-b);
    }
    else
    {
        printf("There are no profit or loss");
    }
}

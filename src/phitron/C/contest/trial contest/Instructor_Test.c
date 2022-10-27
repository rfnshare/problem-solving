#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int X,Y;
    scanf("%d%d", &X,&Y);
    if(0 <= X <= 100 && 0 <= Y <= 100)
    {
        printf("%d",X*Y);
    }
    return 0;
}

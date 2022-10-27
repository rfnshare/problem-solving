#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int A,B,C;
    scanf("%d%d%d", &A,&B,&C);
    if(0 <= A,B,C <= 100)
    {
        if(A==B && B==C && A==C && 0<A && 0<B && 0<C)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
    return 0;
}
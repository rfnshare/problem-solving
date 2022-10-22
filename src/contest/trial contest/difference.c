#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int A,B;
    scanf("%d%d", &A,&B);
    if(0 <= A <= 100 && 0 <= B <= 100)
    {
        printf("%d",abs(B-A));
    }
    return 0;
}

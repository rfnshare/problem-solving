#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N,M;
    scanf("%d%d", &N,&M);
    if(0 <= N <= 100 && 0 <= M <= 100)
    {
        printf("%d",M+N);
    }
    return 0;
}

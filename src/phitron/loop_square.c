#include <stdio.h>
#include <math.h>
int main()
{
    int a,c;
    printf("Input number of terms :");
    scanf("%d", &a);
    for(int i=1; i<=a; i++)
    {
        c = pow(i,2);
        printf("Number is : %d and Square of the %d is :%d\n",i,i,c);
    }
    
    
}
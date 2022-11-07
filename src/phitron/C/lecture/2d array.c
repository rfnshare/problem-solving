#include<stdio.h>
int main()
{
    int a[4][3], i,j, count=0;
    a[4][3] = 2246;
    for(i=0;i<=4; i++)
    {
        for(j=0;j<=3;j++)
        {
            // a[i][j] = 0;
            count++;
            printf("%d ->%d\n", a[i][j], count);
        }
    }

}
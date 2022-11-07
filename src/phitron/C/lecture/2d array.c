#include<stdio.h>
int main()
{
    int row = 4, column = 3;
    int a[row][column], i,j, count=0;
 
    for(i=0;i<row; i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<row; i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
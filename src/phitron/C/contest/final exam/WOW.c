#include<stdio.h>
int main()
{
    int n, i, j, k, flag = 0;
    scanf("%d",&n);
    for(i=0;i<n*2;i++)
    {
        for(k=i;k<n*2;k++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            if (flag==0)
            {
                printf("^ ");
                if (j<i)
                {
                    flag = 1;
                }
                
            }
            else
            {
                printf("* ");
                if (j<i)
                {
                    flag = 0;
                }
            }
            
        }
        i+=1;
        printf("\n");

    }
}
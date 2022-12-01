#include<stdio.h>
int main()
{
    int a,i,count=0,sum=0;
    scanf("%d", &a);
    for(i=1;i<=a;i++)
    {
        if(count==3)
        {
            while(0<count)
            {
                sum-=i;
                i++;
                count--;
            }
        }
        sum+=i;
        count++;
    }
    printf("%d",sum);
}
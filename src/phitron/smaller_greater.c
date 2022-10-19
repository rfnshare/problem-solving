#include<stdio.h>
// find out the biggest number
int main()
{
    int x,y;
    printf("Enter Two Number For Compare\n");
    scanf("%d%d", &x,&y);
    if (x>y)
    {
        printf("Large Number is %d", x);
    }
    else
    {
        if(x<y)
        {
            printf("Large Number is %d", y);
        }
        else
        {
            printf("They are equal");
        }


    }
    return 0;
}

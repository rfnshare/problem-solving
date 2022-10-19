#include<stdio.h>
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
        printf("Large Number is %d", y);

    }
    return 0;
}

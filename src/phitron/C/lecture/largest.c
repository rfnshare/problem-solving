#include<stdio.h>
// find out the largest number
int main()
{
    int x,y,z;
    printf("Enter Three Number For Compare\n");
    scanf("%d%d%d", &x,&y,&z);
    if (x>y && x>z)
    {
        printf("Large Number is %d", x);
    }
    else if(y>x && y>z)
    {
        printf("Large Number is %d", y);

    }
    else if(z>x && z>y)
    {
        printf("Large Number is %d", z);
    }
    else
    {
        printf("They are equal");
    }
    return 0;
}


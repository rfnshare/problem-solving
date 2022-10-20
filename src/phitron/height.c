#include<stdio.h>

int main()
{
    int a;
    printf("Sample Non Negative Input:\n");
    scanf("%d", &a);
    if (a<150)
    {
        printf("The person is Dwarf");
    }
    else if(a==150)
    {
        printf("The person is Average Height");
    }
    else
    {
        printf("The person is Tall");
    }



    return 0;
}



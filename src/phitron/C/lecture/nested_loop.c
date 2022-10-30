#include <stdio.h>
int main()
{
    int i, j;
    i=0;
    while (i<13)
    {
        j=0;
        while (j<15)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    
    // for (i = 0; i < 3; i++)
    // {
    //     for (j = 0; j < 5; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
}
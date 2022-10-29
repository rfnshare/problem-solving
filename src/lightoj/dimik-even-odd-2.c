#include <stdio.h>
int main()
{
    int t, a[999];
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%s", &a);
        printf("%d", sizeof(a)/sizeof(int));
        // if ((int)a%2==0)
        // {
        //     printf("Even\n");
        // }
        // else
        // {
        //     printf("Odd\n");
        // }
        
    }
}
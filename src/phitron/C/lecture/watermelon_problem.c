#include<stdio.h>
#include<math.h>
// find out watermelon is even cut check for two person
int main()
{
    int w;
    printf("Enter watermelon Weight: ");
    scanf("%d", &w);
    if(w%4==0 && 2<w)
    {
        printf("Possible");
    }
    else
    {
        printf("Not Possible");
    }

    return 0;
}


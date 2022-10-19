#include<stdio.h>
#include<math.h>
// find out watermelon is even cut check for two person
int main()
{
    int w;
    printf("Enter watermelon Weight: ");
    scanf("%d", &w);
    if(w%2==0 && 2<w)
    {
        int r = w/2;
        if(r%2==0)
        {
            printf("Possible");
        }
        else
        {
            printf("Not Possible");
        }
    }
    else
    {
        printf("Not Possible");
    }

    return 0;
}


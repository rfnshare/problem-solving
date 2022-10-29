#include<stdio.h>
#include<math.h>
// find out watermelon is even cut check for two person
int main()
{
    int w;
    scanf("%d", &w);
    if(w%2==0 && 2<w)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}


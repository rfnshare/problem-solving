#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, r;
    char str[20];
    scanf("%d", &n);
    r = sqrt(n);
    for (i = 2; i <= r; i++)
    {
        if (n % i == 0)
        {
            strcpy(str, "Composite");
        }
        else if(i==r)
        {
            strcpy(str, "Prime");
        }
    }
    printf("%s", str);
    
}
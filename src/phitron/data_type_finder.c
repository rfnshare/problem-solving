#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);
    int b = a;
    if(b>=48 && 57>=b)
    {
        printf("This is a number.");
    }
    else if(b>=65 && 90>=b)
    {
        printf("This is a Capital Letter.");
    }
    else if(b>=97 && 122>=b)
    {
        printf("This is a Small Letter.");
    }
    else
    {
        printf("This is a special character.");
    }
}

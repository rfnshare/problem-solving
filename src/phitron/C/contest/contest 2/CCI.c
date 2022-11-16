#include <stdio.h>
int main()
{
    int a, b, i, j, k;
    char arr[] = "International Cricket Council";
    a = strlen(arr);
    for (i = a-1; 0 <= i; i--)
    {
        printf("%c", arr[i]);
    }
}
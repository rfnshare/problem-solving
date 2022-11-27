#include <stdio.h>
int main()
{
    int a=1;
    int* p;
    int arr[] = {1,2,3};
    p = &a;
    printf("%p\n", p);
    printf("%d\n", *p);
    printf("%p\n", arr);
    printf("%p\n", arr+1);
    *p = 7;
    printf("%d\n", a);
    return 0;
}
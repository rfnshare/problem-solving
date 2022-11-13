// printf for normal output
// putchar() -> getchar() for char output
// puts() --> gets(), fgets() for string output
// fprintf() for file output

#include <stdio.h>
int main()
{
    // short int a = 32767;
    // float j = 7.89;
    // printf("%hi\a", a);
    // printf("\t%f", j);
    // char ch;
    // ch = getchar();
    // putchar(ch);
    char name[100];
    gets(name);
    // fgets(name, 10, stdin);
    puts(name);
    return 0;
}
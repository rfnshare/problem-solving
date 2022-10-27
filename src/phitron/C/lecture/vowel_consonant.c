#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);

    if(a=='a' || a=='A' || a=='e' || a=='E' || a=='i' || a=='I' || a=='o' || a=='O' || a=='u' || a=='U')
    {
        printf("The alphabet is a vowel.");
    }
    else if((a>='a' && 'z'>=a) || (a>='A' && 'Z'>=a))
    {
        printf("The alphabet is a consonant.");
    }
    else
    {
        printf("This is not a alphabet");
    }
}


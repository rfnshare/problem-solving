#include <stdio.h>
int main()
{
    FILE *inputfile;
    inputfile = fopen("input.txt", "r");
    if (inputfile == NULL)
    {
        printf("No File Found\n");
        return 0;
    }

    // char ch = fgetc(inputfile);
    // printf("%c", ch);
    // char ch2 = fgetc(inputfile);
    // printf("%c", ch2);
    FILE *outputfile;
    outputfile = fopen("output2.txt", "w");
    while (1)
    {
        char ch = fgetc(inputfile);
        if (ch == EOF)
        {
            break;
        }
        // printf("%c", ch);
        fputc(ch, outputfile);
    }

    return 0;
}
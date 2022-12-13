#include <stdio.h>
int main()
{
    FILE *inputfile;
    FILE *outputfile;
    inputfile = fopen("input.txt", "r");
    outputfile = fopen("output.txt", "a");

    if (inputfile == NULL)
    {
        fprintf(outputfile, "No File Found\n");
        return 0;
    }
    int n;
    fscanf(inputfile, "%d", &n);
    fprintf(outputfile, "%d\n", n);

    fclose(inputfile);
    fclose(outputfile);
    return 0;
}
// lec_cm.exe < input.txt > output.txt
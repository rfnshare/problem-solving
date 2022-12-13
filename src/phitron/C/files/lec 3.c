#include <stdio.h>
int main()
{
    FILE *inputfile;
    FILE *outputfile;
    inputfile = fopen("input2.txt", "r");
    outputfile = fopen("output2.txt", "w");

    if (inputfile == NULL)
    {
        fprintf(outputfile, "No File Found\n");
        return 0;
    }

    int a, sum = 0, i;
    fscanf(inputfile, "%d", &a);
    for (i = 0; i < a; i++)
    {
        int b;
        fscanf(inputfile, "%d", &b);
        sum += b;
    }
    fprintf(outputfile, "Sum -> %d", sum);
    return 0;
}
// lec_cm.exe < input.txt > output.txt
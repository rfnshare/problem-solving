#include <stdio.h>
int main()
{
    FILE *logFile;
    FILE *inputfile;
    logFile = fopen("log.txt", "a");
    // fprintf(logFile, "Hello ar 12:05AM\n");
    inputfile = fopen("input2.txt", "r");

    if (inputfile == NULL)
    {
        fprintf(logFile, "No File Found at 02:37PM\n");
        return 0;
    }
}
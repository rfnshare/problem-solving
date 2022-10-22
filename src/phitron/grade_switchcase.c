#include <stdio.h>
int main()
{
    char a, notes[10];
    printf("Test Data: ");
    scanf(" %c", &a);
    char grd = toupper(a);
    switch (grd)
    {
    case 'E':
        strcpy(notes, "Excellent");
        break;

    case 'V':
        strcpy(notes, "Very Good");
        break;

    case 'G':
        strcpy(notes, "Good");
        break;

    case 'A':
        strcpy(notes, "Average");
        break;

    case 'F':
        strcpy(notes, "Fail");
        break;
    }
    printf("You have chosen: %s", notes);
}

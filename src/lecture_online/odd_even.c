// Author: Abdullah Al Faroque
// Date: 9/11/2022
/* Program for find even or odd from number */
#include <stdio.h>
#include <conio.h>
void main()
{
    int number_line, number, i;
    // Takes Input From User, How Many Number Line User Needed
    printf("Input,Output\n");
    scanf("%d", &number_line);
    getchar();
    for (i=0; i<number_line; i++)
    {
        scanf("%d", &number);
        getchar();
        if (number%2==0)
        {
            printf("Even\n");
        }
        else
        {
            printf("Odd\n");
        }

    }


}

#include <stdio.h>
int main()
{
    int student = 10, subject;
    float marks, sum = 0;
    printf("Enter Total Subjects: ");
    scanf("%d", &subject);
    for (int i = 1; i <= student; i++)
    {
        printf("Enter marks of %dth student: ", i);
        for (int k = 0; k < subject; k++)
        {
            scanf("%f", &marks);
            sum += marks;
        }
        printf("Average = %.2f\n", i, sum / subject);
        sum = 0;
    }
}
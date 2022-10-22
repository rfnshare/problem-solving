#include <stdio.h>
int main()
{
    int roll, phy, chem, ca;
    char nm[20], div[20];
    float total, percentage ;
    printf("Input the Roll Number of the student :");
    scanf("%d", &roll);
    printf("Input the Name of the Student :");
    scanf(" %s", &nm);
    printf("Input the marks of Physics, Chemistry and Computer Application :");
    scanf("%d%d%d", &phy, &chem, &ca);
    total = phy + chem + ca;
    percentage = (total*100)/300;
    if (percentage>=60)
    {
        strcpy(div, "First");
    }
    else
    {
        strcpy(div, "Second");
    }

    printf("Roll No: %d\n", roll);
    printf("Name of Student: %s\n", nm);
    printf("Marks in Physics: %d\n", phy);
    printf("Marks in Chemistry: %d\n", chem);
    printf("Marks in Computer Application: %d\n", ca);
    printf("Total Marks = %d\n", (int)total);
    printf("Percentage = %.2f\n", percentage);
    printf("Division = %s", div);

}
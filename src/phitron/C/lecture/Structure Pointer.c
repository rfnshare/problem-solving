#include <stdio.h>
struct Student
{
    double weight;
    int roll;
};
int main()
{
    struct Student s = {.roll = 12, .weight = 78.9};
    struct Student s2 = {.roll = 12, .weight = 78.9};
    struct Student *sp;
    sp = &s;
    printf("%p\n%p\n", sp, &s2);
    printf("%d %lf", sp->roll, sp->weight);
}
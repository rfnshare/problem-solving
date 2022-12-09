#include <stdio.h>
struct Student
{
    char name[20];
    int roll;
};
int main()
{
    struct Student s = {.name = "Abdullah Al Faroque", .roll = 59};
    printf("Name = %s\n", s.name);
    printf("Roll = %d", s.roll);
    return 0;
}

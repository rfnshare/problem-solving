#include <stdio.h>
struct Student
{
    int roll;
    int age;
    float weight;
    char name[50];
};
int main()
{
    int a, b, i, j, k;
    struct Student s1 = {12, 24, 75.6, "Faroque"};
    strcpy(s1.name, "New Name");
    printf("Roll = %d\nAge = %d\nWeight = %0.2f\nName = %s\n\n", s1.roll, s1.age, s1.weight, s1.name);
    struct Student s2 = {121, 241, 751.6, "Faroque Two"};
    printf("Roll = %d\nAge = %d\nWeight = %0.2f\nName = %s", s2.roll, s2.age, s2.weight, s2.name);
    // s.roll = 45;
    // s.age = 20;
    // s.weight = 75.6;
}
#include <stdio.h>
struct Student
{
    int roll;
    double marks;
    char name[50];
};
void printstudent(int i, struct Student s);
int main()
{
    struct Student cls[5];
    int i, sum=0;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &cls[i].roll);
        scanf("%lf", &cls[i].marks);
        scanf("%s", &cls[i].name);
    }
    for (i = 0; i < 5; i++)
    {
        if (cls[i].roll % 2 == 0)
        {
            printstudent(i, cls[i]);
            sum += cls[i].marks;
        }
    }
    printf("Total Marks %d", sum);
    return 0;
}
void printstudent(int i, struct Student s)
{
    printf("Information of student %d\n", i);
    printf("%d\n", s.roll);
    printf("%lf\n", s.marks);
    printf("%s\n", s.name);
}

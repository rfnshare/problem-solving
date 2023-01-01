#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int student_id;
    int age;
    string f_name;
    string m_name;
    Student() {}
    Student(string name, int student_id, int age)
    {
        this->name = name;
        this->student_id = student_id;
        this->age = age;
    }
    void print_info()
    {
        cout << name << " " << student_id << " " << age << " " << f_name << " " << m_name << endl;
    }
};

int main()
{
    int a[10];
    Student s[10];
    for (int i = 0; i < 10; i++)
    {
        s[i] = Student("A", i, i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        s[i].print_info();
    }
    return 0;
}
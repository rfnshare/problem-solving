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
    Student *s = new Student("A", 10, 20);
    s->print_info();
    (*s).print_info();
    return 0;
}
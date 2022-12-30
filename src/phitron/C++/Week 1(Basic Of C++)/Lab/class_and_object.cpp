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
    void print_info()
    {
        cout << name << " " << student_id << " " << age << " " << f_name << " " << m_name << endl;
    }
};

int main()
{
    cout << "Testing" << endl;
    Student s;
    s.name = "Abdullah Al Faroque";
    s.student_id = 30770;
    s.age = 26;
    s.f_name = "Delwar Hossain";
    s.m_name = "Farida Akter";
    s.print_info();

    Student s2;
    s.name = "Abdullah Al Rashed";
    s.student_id = 30771;
    s.age = 23;
    s.f_name = "Delwar Hossain";
    s.m_name = "Farida Akter";
    s.print_info();
    return 0;
}
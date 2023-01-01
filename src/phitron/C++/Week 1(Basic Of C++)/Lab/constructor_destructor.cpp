#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;
    int student_id;
    int age;
    string f_name;
    string m_name;

public:
    void print_info()
    {
        cout << name << " " << student_id << " " << age << " " << f_name << " " << m_name << endl;
    }
    Student(string name, int student_id, int age)
    {
        this->name = name;
        this->student_id = student_id;
        this->age = age;
    }
    Student() {}
    ~Student() { cout << "Calling ..."; }
};
int main()
{
    Student a("A", 20, 20);
    // a.setInfo("A", 20, 20);
    // a.print_info();
    a.print_info();
    Student a2("B", 20, 20);
    a2.print_info();
    return 0;
}
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

class Rectangle
{
public:
    int width, height;
    Student s;
    int calc_area()
    {
        return width * height;
    }
    int calc_perimeter()
    {
        return 2 * (height + width);
    }
};

int main()
{
    Rectangle r1;
    r1.height = 4;
    r1.width = 8;
    cout << r1.calc_area() << endl;
    cout << r1.calc_perimeter() << endl;
    Rectangle r2;
    r2.height = 3;
    r2.width = 9;
    cout << r2.calc_area() << endl;
    cout << r2.calc_perimeter() << endl;
    r1.s.f_name = "Father Name";
    r1.s.print_info();
    // cout << "Testing" << endl;
    // Student s;
    // s.name = "Abdullah Al Faroque";
    // s.student_id = 30770;
    // s.age = 26;
    // s.f_name = "Delwar Hossain";
    // s.m_name = "Farida Akter";
    // s.print_info();

    // Student s2;
    // s.name = "Abdullah Al Rashed";
    // s.student_id = 30771;
    // s.age = 23;
    // s.f_name = "Delwar Hossain";
    // s.m_name = "Farida Akter";
    // s.print_info();
    return 0;
}
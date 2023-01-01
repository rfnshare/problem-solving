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
    // operator overloading
    bool operator<(Student s)
    {
        return student_id < s.student_id;
    }
};
// bool comp(Student a, Student b)
// {
//     //
//     return a.student_id < b.student_id;
// }
int main()
{
    vector<Student> a;
    for (int i = 0; i < 10; i++)
    {
        a.push_back(Student("A", 10 - i, i + 1));
    }
    for (int i = 0; i < 10; i++)
    {
        a[i].print_info();
    }
    cout << "After Soring" << endl;
    // sort(a.begin(), a.end(), comp);
    sort(a.begin(), a.end());
    for (int i = 0; i < 10; i++)
    {
        a[i].print_info();
    }
    // int a[10];
    // Student s[10];
    // for (int i = 0; i < 10; i++)
    // {
    //     s[i] = Student("A", i, i + 1);
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     s[i].print_info();
    // }
    return 0;
}
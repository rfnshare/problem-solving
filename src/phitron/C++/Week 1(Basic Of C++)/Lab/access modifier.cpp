#include <bits/stdc++.h>
using namespace std;
class User
{
protected:
    string name;
    int age;
};
class Admin : User
{
private:
    string designation;

public:
    void Set(string d, string n, int a)
    {
        designation = d;
        name = n;
        age = a;
    }
    void print()
    {
        cout << name << endl;
        cout << age << endl;
        cout << designation << endl;
    }
};
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
    void setInfo(string s, int id, int a)
    {
        name = s;
        student_id = id;
        age = a;
    }
};
int main()
{
    Admin a;
    a.Set("A", "B", 20);
    a.print();
    return 0;
}
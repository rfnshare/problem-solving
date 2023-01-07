#include <bits/stdc++.h>
using namespace std;
class Student
{
private:
    string name;
    int id;
    int age;
    string fathers_name;
    string mothers_name;

public:
    Student() {}
    Student(string name, int id, int age, string fathers_name, string mothers_name)
    {
        this->name = name;
        this->age = age;
        this->id = id;
        this->fathers_name = fathers_name;
        this->mothers_name = mothers_name;
    }
    void print_info()
    {
        cout << "Name: " << name << "\n";
        cout << "Id: " << id << "\n";
        cout << "Age: " << age << "\n";
        cout << "Father Name: " << fathers_name << "\n";
        cout << "Mother Name: " << mothers_name << "\n";
        cout << "***********************************\n";
    }
    ~Student()
    {
        cout << "Calling Destructor\n";
        print_info();
    }
};
int main()
{
    vector<Student> s(10);
    for (int i = 0; i < 10; i++)
    {
        s[i] = Student("A", i, 10 + i, "B", "C");
    }
    for (int i = 0; i < s.size(); i++)
    {
        s[i].print_info();
    }
}
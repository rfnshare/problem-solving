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
        // cout << "Calling Destructor\n";
        // print_info();
    }
    bool operator<(Student s)
    {
        return age < s.age;
    }
};
// bool comp(Student a, Student b)
// {
//     //
//     return a.id < b.id;
// }
int main()
{
    vector<Student> s(10);
    for (int i = 0; i < 10; i++)
    {
        s[i] = Student("A", i, 30 - i, "B", "C");
    }
    s.push_back(Student("Abdullah Al Faroque", 1530, 26, "Delwer Hossain", "Farida Akter"));
    for (int i = 0; i < s.size(); i++)
    {
        s[i].print_info();
    }
    cout << "After Sorting...." << endl;
    // sort(s.begin(), s.end(), comp);
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++)
    {
        s[i].print_info();
    }
}
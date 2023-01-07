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
    }
    ~Student()
    {
        cout << "Calling Destructor\n";
        print_info();
    }
};
class Person
{
private:
    string name;

public:
    Person *father, *mother;
    Person()
    {
        father = NULL;
        mother = NULL;
    };
    Person(string name, string father_name, string mother_name)
    {
        this->name = name;
        this->father = new Person;
        this->father->name = father_name;
        this->mother = new Person;
        this->mother->name = mother_name;
    }
    void print_info()
    {
        cout << "Name: " << name << "\n";
        cout << "Father Name: " << father->name << "\n";
        cout << "Mother Name: " << mother->name << "\n";
    }
    ~Person()
    {
        cout << "Calling Destructor...\n";
        if (father != NULL)
        {
            delete father;
        }
        if (mother != NULL)
        {
            delete mother;
        }
    }
};
int main()
{
    Student *s = new Student("Faroque", 10, 26, "Delwer", "Mother");
    s->print_info();
    (*s).print_info();
    // Person p1("Abdullah Al Faroque", "Delwer Hossain", "Farida Akter");
    // p1.print_info();
    // Student s("Faroque", 10, 26, "Delwer", "Mother");
    // s.print_info();
    // Student s1;
    // s1.print_info();
}
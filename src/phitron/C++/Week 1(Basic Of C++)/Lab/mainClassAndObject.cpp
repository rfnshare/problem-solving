#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int id;
    int age;
    string fathers_name;
    string mother_name;
    void print_info()
    {
        cout << "Name: " << name << "\n";
        cout << "Id: " << id << "\n";
        cout << "Age: " << age << "\n";
        cout << "Father Name: " << fathers_name << "\n";
        cout << "Mother Name: " << mother_name << "\n";
    }
};
class Rectangle
{
public:
    int width, height;
    Student s;
    int area()
    {
        return width * height;
    }
    int perimeter()
    {
        return 2 * (height + width);
    }
};
class Person
{
public:
    string name;
    Person *father, *mother;
    void print_info()
    {
        cout << "Name: " << name << "\n";
        cout << "Father Name: " << father->name << "\n";
        cout << "Mother Name: " << mother->name << "\n";
        delete father;
        delete mother;
    }
    void check()
    {
        cout << "Father Name: " << father->name << "\n";
        cout << "Mother Name: " << mother->name << "\n";
    }
};
int main()
{
    Person p1;
    p1.name = "Abdullah Al Faroque";
    p1.father = new Person;
    p1.father->name = "Delwer Hossain";
    p1.mother = new Person;
    p1.mother->name = "Farida Akter";
    p1.print_info();
    p1.check();
    // Rectangle r1, r2;
    // r1.height = 4;
    // r1.width = 8;
    // cout << r1.area() << "\n";
    // cout << r1.perimeter() << "\n";
    // r2.height = 3;
    // r2.width = 9;
    // cout << r2.area() << "\n";
    // cout << r2.perimeter() << "\n";
    // r1.s.name = "Reacangle Name"; //multilabel uses of class & object
    // r1.s.print_info();
    // Student s, s2;
    // s.name = "Abdullah Al Faroque";
    // s.id = 15307703;
    // s.age = 26;
    // s.fathers_name = "Delwer Hossain";
    // s.mother_name = "Farida Akter";
    // s.print_info();
    // cout << "\n";
    // s2.name = "Abdullah Al Rashed";
    // s2.id = 15307704;
    // s2.age = 22;
    // s2.fathers_name = "Delwer Hossain";
    // s2.mother_name = "Farida Akter";
    // s2.print_info();
    return 0;
}
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
    void setInfo(string name, int id, int age, string fathers_name, string mothers_name)
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
};
class User
{
protected:
    string name;
    int age;
};
class Admin : User
{
private:
    int role;

public:
    void setInfo(string name, int role, int age)
    {
        this->name = name;
        this->age = age;
        this->role = role;
    }
    void print_info()
    {
        cout << "Name: " << name << "\n";
        cout << "Role: " << role << "\n";
        cout << "Age: " << age << "\n";
    }
};
int main()
{
    // Student s;
    // s.setInfo("Faroque", 12, 26, "Delwer", "Farida");
    // s.print_info();
    Admin a1, a2;
    a1.setInfo("Faroque", 1, 26);
    a2.setInfo("Raju", 0, 26);
    a1.print_info();
    a2.print_info();
}

/*
private(self class), public(everyone), protected (self class, inherited class)
*/
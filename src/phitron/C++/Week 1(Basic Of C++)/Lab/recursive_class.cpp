#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    Person *f_name, *m_name;
    void print_info()
    {
        cout << "Name: " << name << endl;
        cout << "Fathers Name: " << f_name->name << endl;
        cout << "Mothers Name: " << m_name->name << endl;
    }
};
int main()
{
    Person p;
    p.f_name = new Person;
    p.m_name = new Person;
    p.name = "Faroque";
    p.f_name->name = "Delwar";
    p.m_name->name = "Farida";
    p.print_info();
}
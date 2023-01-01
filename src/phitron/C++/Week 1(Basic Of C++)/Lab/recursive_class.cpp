#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    Person *father, *mother;
    void print_info()
    {
        cout << "Name: " << name << endl;
        cout << "Fathers Name: " << father->name << endl;
        cout << "Mothers Name: " << mother->name << endl;
    }
    Person()
    {
        father = NULL;
        mother = NULL;
    }
    Person(string name, string f_name, string m_name)
    {
        this->name = name;
        father = new Person;
        father->name = f_name;
        mother = new Person;
        mother->name = m_name;
    }
    ~Person()
    {
        cout << "Destructor Calling ";
        if (father != NULL)
            delete father;
        if (mother != NULL)
            delete mother;
    }
};
int main()
{
    Person p("A", "B", "C");
    // p.f_name = new Person;
    // p.m_name = new Person;
    // p.name = "Faroque";
    // p.f_name->name = "Delwar";
    // p.m_name->name = "Farida";
    p.print_info();
}
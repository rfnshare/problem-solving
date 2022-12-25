#include <iostream>
using namespace std;
string fun1(string s) // pass by value
{
    s.erase(s.begin());
    s.erase(s.begin() + s.size() - 1);
    return s;
}
void fun2(string &s) // pass by reference
{
    s.erase(s.begin());
    s.erase(s.begin() + s.size() - 1);
}
int main()
{
    string s;
    cin >> s;

    // cout << fun1(s) << endl;
    fun2(s);
    cout << s << endl;

    return 0;
}
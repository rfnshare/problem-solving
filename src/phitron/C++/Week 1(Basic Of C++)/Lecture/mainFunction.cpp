#include <bits/stdc++.h>
using namespace std;
void earse_first_last(string &s);
void swap(int &a, int &b);
int main()
{
    // string s;
    // getline(cin, s);
    // earse_first_last(s);
    // cout << s;
    int a, b;
    a = 5, b = 10;
    swap(a, b);
    cout << a << " " << b << endl;
    return 0;
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void earse_first_last(string &s)
{
    s.erase(s.begin());
    s.pop_back();
}
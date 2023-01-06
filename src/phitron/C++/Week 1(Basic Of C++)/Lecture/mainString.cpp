#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, s1, s2, s3;
    getline(cin, s);
    // getline(cin, s1);
    // getline(cin, s2);
    // s3 = s + s1 + s2;
    // cout << s3;

    // cout << s[0];
    // cout << s[1];
    // wanna know string length?
    // cout << s.size() << endl;
    // for (int i = 0; i < s.size(); i++)
    // {
    //     s[i] += 1;
    // }
    ofstream o;
    o.open("string_output.txt");

    // wanna delete last char in string?
    // s.pop_back();
    s.erase(s.begin() + s.size() - 1);
    // wanna delete first char or any pos char?
    s.erase(s.begin());
    o << s;

    return 0;
}
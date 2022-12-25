#include <iostream>
using namespace std;
int main()
{
    string s;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // cin >>s;
    getline(cin, s);
    cout<<s<<endl;
    return 0;
}
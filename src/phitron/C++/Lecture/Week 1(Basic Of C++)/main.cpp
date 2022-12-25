#include <iostream>
using namespace std;
int main()
{
    cout<<"Hello World\n"<<endl;
    int x,y;
    char ch;
    float f;
    double d;
    string s;
    // cin>>x>>ch>>f>>d;
    // cout<<x<<" "<<ch<<" "<<f<<" "<<d<<endl;
    // cin >>s;
    getline(cin, s);
    cout<<s<<endl;
    return 0;
}
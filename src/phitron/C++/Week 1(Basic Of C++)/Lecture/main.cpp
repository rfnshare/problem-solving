#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<"Hello World"<<endl;
    int x,y;
    char ch,ch2;
    float f;
    double d;
    string s;
    cin>>x>>ch>>f>>d;
    cout<<x<<" "<<ch<<" "<<f<<" "<<d<<endl;
    cout<<setprecision(2)<<fixed<<d<<endl;
    // cin >>s;
    cin.ignore(); //ref https://stackoverflow.com/questions/7786994/c-getline-isnt-waiting-for-input-from-console-when-called-multiple-times
    getline(cin, s);
    cout<<s<<endl;
    // cin>>ch;
    // cin>>ch2;
    // cin.ignore();
    // getline(cin, s);
    // cout<<ch<<ch2<<endl;
    // cout<<s;
    return 0;
}
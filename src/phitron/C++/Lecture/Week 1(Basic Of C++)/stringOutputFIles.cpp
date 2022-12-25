#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // string s;
    // ofstream of, of2;
    // of.open("1.txt");
    // of2.open("2.txt");

    ifstream in1, in2;
    in1.open("input.txt");
    int x;
    double y,z;
    in1>>x>>y>>z;
    cout<<x<<" "<<y<<" "<<z;

    // of<<"Hello"<<endl;
    // of2<<"Hello Two"<<endl;
    return 0;
}
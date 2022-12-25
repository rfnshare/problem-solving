#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string s;
    ofstream of, of2;
    of.open("1.txt");
    of2.open("2.txt");

    ifstream in1, in2;
    in1.open("input.txt");
    
    of<<"Hello"<<endl;
    of2<<"Hello Two"<<endl;
    return 0;
}
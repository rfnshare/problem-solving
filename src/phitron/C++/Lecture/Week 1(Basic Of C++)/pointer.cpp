#include<iostream>
using namespace std;
int main()
{
    int x=100;
    int* y = &x;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<*y<<endl;
}
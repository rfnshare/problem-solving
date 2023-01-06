#include <bits/stdc++.h>
using namespace std;
int x=10, y, z;
int fun(int a, int b)
{
    return a + b;
}
namespace Info{
    int x=5;
    int y = 10;
    int fun(int a, int b)
    {
        return a+b;
    }
}
int main()
{
    cout<<Info::x<<endl;
    cout<<fun(5,6)<<endl;
    cout<<Info::fun(1,2)<<endl;
    return 0;
}
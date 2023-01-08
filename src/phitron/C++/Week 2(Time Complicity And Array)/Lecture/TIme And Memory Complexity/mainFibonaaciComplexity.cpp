#include <bits/stdc++.h>
using namespace std;
int a = 0;
vector<int> x(100);
int fun_rec(int n)
{

    if (n == 0)
    {
        a++;
        return n;
    }

    if (n == 1)
    {
        a++;
        return n;
    }
    if (x[n] != 0)
    {
        a++;
        return x[n];
    }
    int g = fun_rec(n - 1);
    int h = fun_rec(n - 2);
    x[n] = g + h;
    return g + h;
}
int main()
{
    int n;
    cin >> n;
    cout << fun_rec(n) << "\n";
    cout << "Called: " << a;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream ifs;
    ifs.open("input.txt");
    int a, sum = 0, mul = 1;
    ifs >> a;
    int x[a];
    for (int i = 0; i < a; i++)
    {
        ifs >> x[i];
    }
    for (int i = 0; i < a; i++)
    {
        sum += x[i];
        mul *= x[i];
    }
    ofstream o, o1;
    o.open("sum.txt");
    o << "SUM: " << sum << endl;
    o << "MUL: " << mul << endl;
}
/*
10
1 2 3 4 5 6 7 8 9 10
then sum calculate
*/
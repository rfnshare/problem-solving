#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string s;
    // // string s = "I love Bangladesh ";
    // // string s2 = "Onkk";x
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // // cin >> s; //not taking full line
    // getline(cin, s); //taking full line
    // cout << s;
    int x;
    double y, z;
    ifstream ifs;
    ifs.open("input.txt");
    ifs >> x >> y >> z;

    ofstream op, op1;
    op.open("1.txt");
    op1.open("2.txt");
    op << x << " " << y << " " << z;
    op1 << x + y + z;
    ifs.close();
    op.close();
    op1.close();
    double q;
    q = 3.444444444;
    cout << setprecision(2) << fixed << q;
}
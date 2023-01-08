#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, mul = 1;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            mul *= a[i];
        }
    }
    cout << mul;
}
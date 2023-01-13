#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n), b;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 1; i <= n; i++)
    {
        b.push_back(i);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i + 1] == b[i])
        {
            continue;
        }
        else
        {
            cout << b[i];
            break;
        }
    }
}
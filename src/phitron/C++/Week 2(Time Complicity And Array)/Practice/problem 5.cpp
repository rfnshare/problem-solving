#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;

    cin >> x;
    vector<int> a(x);
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    cin >> y;
    vector<int> b(y);
    for (int i = 0; i < y; i++)
    {
        cin >> b[i];
    }
    vector<int> res;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            // cout << a[i] << " ";
            // cout << b[j] << " ";
            // cout << "\n";
            if (a[i] == b[j])
            {
                res.push_back(a[i]);
            }
            else
            {
                res.push_back(a[i]);
                res.push_back(b[i]);
            }
        }
    }
    sort(res.begin(),res.end());
    vector<int>::iterator ip;
    ip = unique(res.begin(),res.end());
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}
/*
4
1 2 3 5
5
1 6 2 7 3
*/
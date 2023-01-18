#include <bits/stdc++.h>
using namespace std;
vector<int> merge(vector<int> a, vector<int> b)
{
    vector<int> all;
    for (int i = 0; i < a.size(); i++)
    {
        all.push_back(a[i]);
    }
    for (int i = 0; i < b.size(); i++)
    {
        all.push_back(b[i]);
    }
    sort(all.begin(), all.end());
    reverse(all.begin(), all.end());
    return all;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    vector<int> result = merge(a, b);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}
/*
4
5 3 2 1
5
7 6 3 2 1
*/
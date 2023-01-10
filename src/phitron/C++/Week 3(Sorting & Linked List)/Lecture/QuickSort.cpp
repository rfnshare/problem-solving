#include <bits/stdc++.h>
using namespace std;
vector<int> quick_sort(vector<int> a)
{
    // base case
    if (a.size() <= 1)
    {
        return a;
    }
    int pivot = a.size() / 2;
    vector<int> b;
    vector<int> c;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] < a[pivot])
        {
            b.push_back(a[i]);
        }
        else if (a[i] > a[pivot])
        {
            c.push_back(a[i]);
        }
    }
    //b + a[pivot] + c
    vector<int> sorted_b = quick_sort(b);
    vector<int> sorted_c = quick_sort(c);
    vector<int> sorted_a;

    if (sorted_b.size() == 0)
    {
        sorted_a.push_back(a[pivot]);
    }
    else
    {
        sorted_a.push_back(sorted_b[0]);
        sorted_a.push_back(a[pivot]);
    }

    if (sorted_c.size() != 0)
    {
        sorted_a.push_back(sorted_c[0]);
    }

    return sorted_a;
}
int main()
{
    int n;
    cin >> n;
    vector<int> q(n);
    for (int i = 0; i < n; i++)
    {
        cin >> q[i];
    }
    vector<int> ans = quick_sort(q);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
/*
6
5 3 7 1 8 9
*/
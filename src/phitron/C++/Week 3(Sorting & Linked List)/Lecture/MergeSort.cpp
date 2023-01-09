#include <bits/stdc++.h>
using namespace std;
vector<int> merge_sort(vector<int> a)
{
    // base case
    if (a.size() <= 1)
    {
        return a;
    }
    int mid = a.size() / 2;
    vector<int> b;
    vector<int> c;
    for (int i = 0; i < mid ; i++)
    {
        b.push_back(a[i]);
    }
    for (int i = mid; i < a.size(); i++)
    {
        c.push_back(a[i]);
    }
    vector<int> sorted_b = merge_sort(b);
    vector<int> sorted_c = merge_sort(c);

    vector<int> sorted_a;
    int indx1 = 0;
    int indx2 = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (indx1 == sorted_b.size())
        {
            sorted_a.push_back(sorted_c[indx2]);
            indx2++;
        }
        else if (indx2 == sorted_c.size())
        {
            sorted_a.push_back(sorted_b[indx1]);
            indx1++;
        }
        else if (sorted_b[indx1] < sorted_c[indx2])
        {
            sorted_a.push_back(sorted_b[indx1]);
            indx1++;
        }
        else
        {
            sorted_a.push_back(sorted_c[indx2]);
            indx2++;
        }
    }
    return sorted_a;
}
int main()
{
    int n;
    cin>>n;
    vector<int> q(n);
    for (int i = 0; i < n; i++)
    {
        cin >> q[i];
    }
    vector<int> ans = merge_sort(q);
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
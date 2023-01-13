#include <bits/stdc++.h>
using namespace std;
vector<int> merge_sort(vector<int> a)
{
    int mid = a.size() / 2;

    vector<int> b, c;
    for (int i = 0; i < mid; i++)
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
    int indx1 = 0, indx2 = 0, k, count = 0;
    cin >> k;
    for (int i = 0; i < a.size(); i++)
    {
        if ((sorted_b[indx1] + sorted_c[indx2]) == k)
        {
            count++;
        }
    }
    cout << count;
    // return c;
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
    merge_sort(a);
    // vector<int> result = merge_sort(a);
    // for (int i = 0; i < result.size(); i++)
    // {
    //     cout << result[i] << " ";
    // }
}
/*
5
6 1 3 2 4
5
*/
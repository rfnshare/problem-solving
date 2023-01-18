#include <bits/stdc++.h>
using namespace std;
vector<int> merge_sort(vector<int> a)
{
    if (a.size() <= 1)
    {
        return a;
    }
    int mid = a.size() / 2;
    vector<int> c, b;
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
    int indx1 = 0, indx2 = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (sorted_b.size() == indx1)
        {
            sorted_a.push_back(sorted_c[indx2]);
            indx2++;
        }
        else if (sorted_c.size() == indx2)
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
    // int n;
    // cin >> n;
    vector<int> a(5);
    a.push_back(6);
    a.push_back(2);
    a.push_back(3);
    a.push_back(3);
    a.push_back(5);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    vector<int> result = merge_sort(a);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}
/*
5
6 2 3 3 5
*/
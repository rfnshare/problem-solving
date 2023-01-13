#include <bits/stdc++.h>
using namespace std;
vector<int> quick_sort(vector<int> a)
{
    // int pivot = rand() % (a.size());
    int pivot = a.size() - 1;
    if (a.size() <= 1)
    {
        return a;
    }
    vector<int> b, c;
    for (int i = 0; i < a.size(); i++)
    {
        if (i == pivot)
            continue;
        else if (a[i] <= a[pivot])
        {
            b.push_back(a[i]);
        }
        else
        {
            c.push_back(a[i]);
        }
    }
    vector<int> sorted_b = quick_sort(b);
    vector<int> sorted_c = quick_sort(c);
    vector<int> sorted_a;
    for (int i = 0; i < sorted_c.size(); i++)
    {
        sorted_a.push_back(sorted_c[i]);
    }
    sorted_a.push_back(a[pivot]);
    for (int i = 0; i < sorted_b.size(); i++)
    {
        sorted_a.push_back(sorted_b[i]);
    }
    return sorted_a;
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
    vector<int> result = quick_sort(a);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}
/*
5
6 2 3 3 5
6
5 6 7 8 0 1
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int q, t;
    cin >> q;
    int low = 0, high = n - 1, flag = 0;
    sort(a.begin(), a.end());
    for (int i = 0; i < q; i++)
    {
        cin >> t;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (a[mid] == t)
            {
                cout << "YES\n";
                flag = 1;
                break;
            }
            if (t < a[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        if (flag == 0)
        {
            cout << "NO\n";
        }
        low = 0, high = n - 1, flag = 0;
    }
    return 0;
}
/*
5
6 3 2 1 8
4
*/
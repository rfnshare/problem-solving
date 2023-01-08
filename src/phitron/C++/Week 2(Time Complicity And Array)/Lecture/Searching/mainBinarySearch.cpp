#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, flag = 1;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int low = 0, high = n - 1;
    while (low <= high)
    {
        cin >> k;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (a[mid] == k)
            {
                cout << "YES " << mid << "\n";
                flag = 1;
                break;
            }
            if (k < a[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
            // else
            // {
            //     cout << "NO\n";
            // }
        }
        if (flag == 0)
        {
            cout << "NO";
        }
        flag = 0;
    }
}
/*
10
2 4 6 7 8 9 10 11 14 18
*/
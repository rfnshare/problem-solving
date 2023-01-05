#include <bits/stdc++.h>
using namespace std;
/*
Time complexity
Memory complexity
Array Must Be Sorted
Divide by Half
new everytime divided
*/
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int low = 0, high = n - 1, flag = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] == k)
        {
            cout << "YES " << mid;
            flag = 1;
        }
        if (a[mid] > k)
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
        cout << "NO";
    }
    return 0;
}
/*
7 3
1 3 5 6 8 9 10
*/
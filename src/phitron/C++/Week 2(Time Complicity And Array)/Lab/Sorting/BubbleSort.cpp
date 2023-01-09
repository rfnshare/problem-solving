#include <bits/stdc++.h>
using namespace std;
/*
Time Complexity -> O(n^2) [O(n^2/2)]
Memory Complexity -> O(n)
*/
int main()
{
    int n, count = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int last = n - 1 - i;
        bool sorted = true;
        for (int j = 0; j <= last - 1; j++)
        {
            count++;
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                sorted = false;
            }
        }
        if (sorted)
            break;
        cout << "After Passing: "<<i<<"\n";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout<<"\n";
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    cout << "\nTotal run for compare: " << count;
    return 0;
}
/*
7
3 5 1 4 2 6 1
*/
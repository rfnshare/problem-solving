#include <bits/stdc++.h>
using namespace std;
/*
Time complexity o(n)
Memory complexity  o(n)
Looking Form Start To End
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
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            cout << "YES->" << i << endl;
        
        }
    }
    return 0;
}
/*
7 5
2 4 5 7 8 9 1
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    int n;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int indx1 = 0;
    int indx2 = 0;
    while (indx2 >= b.size())
    {
        if (a[indx1] != b[indx2])
        {
            indx2++;
        }
    }
    if (0 == 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}
/*
3
7 2 3
5
7 6 3 2 1

1 2 3 6 7
2 3 7
*/
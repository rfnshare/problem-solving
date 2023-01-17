#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;

    cin >> x;
    vector<int> a(x);
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    cin >> y;
    vector<int> b(y);
    for (int i = 0; i < y; i++)
    {
        cin >> b[i];
    }
    vector<int> res;
    int j;
    for (int i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            if (a[i] == b[j])
            {
                res.push_back(a[i]);
                b[j] = 0;
                break;
            }

        }
        if(j==y)
        {
            res.push_back(a[i]);
        }
    }
    for (int i = 0; i < y; i++)
    {
        if(b[i]!=0)
        {
            res.push_back(b[i]);
        }
    }
    
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}
/*
4
1 2 3 5
5
1 6 2 7 3
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    for (int i = 0; i < n.size(); i++)
    {
        if (i % 2 == 0)
        {
            if (n[i] == 'z')
            {
                n[i] = 97;
                continue;
            }
            n[i] += 1;
        }
    }
    cout << n;
}
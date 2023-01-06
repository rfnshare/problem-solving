#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    vector<int> a(x);
    // a.resize(10);
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }

    // for (int i = 0; i < 10; i++)
    // {

    //     cout << "Before Push: " << a.size() << endl;
    //     // cin >> x;
    //     a.push_back(i);
    //     cout << "After Push: " << a.size() << endl;
    // }
    // a.insert(a.begin() + 1, 100);
    // a.erase(a.begin() + 1);
    // // a.pop_back();
    // a.erase(a.begin() + a.size() - 1);
    // for (int i = 0; i < a.size(); i++)
    // {
    //     cout << a[i] << endl;
    // }
}
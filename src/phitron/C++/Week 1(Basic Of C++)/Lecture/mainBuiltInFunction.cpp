#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int a = 4, b = 5, c = 1, d = 2;
    // // swap built in function
    // swap(a, b);
    // cout << "Swap: " << a << endl;
    // // min, max function
    // cout << "Minimun: " << min(a, b) << endl;
    // cout << "Maximum: " << max(a, b) << endl;
    // cout << "Minimun More than 2: " << min({a, b, c, d}) << endl;
    // cout << "Maximum more than 2: " << max({a, b, c, d}) << endl;
    vector<int> a = {3, 2, 1, 4, 5};
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    // let's sort the vector list
    // sort(a.begin(), a.end());
    // reverse(a.begin(), a.end());
    sort(a.begin() + 1, a.begin() + 2 + 1);
    cout << "\nAfter Sorting" << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}

/*
3 2 1 4 5
1 2 3 4 5
*/
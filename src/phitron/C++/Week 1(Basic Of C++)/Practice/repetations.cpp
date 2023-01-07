#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int count = 0;
    vector<int> a;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if (i == j)
                continue;
            if (s[i] == s[j])
                count++;
        }
        a.push_back(count);
        count = 0;
    }

    // Find the max element
    cout << *max_element(a.begin(), a.end()) + 1;
}
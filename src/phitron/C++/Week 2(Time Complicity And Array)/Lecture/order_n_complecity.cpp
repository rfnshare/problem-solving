#include <bits/stdc++.h>
using namespace std;
/*
Time Complexity O(n)
Space Complexity O(n)
variable complexity big o(n)
*/
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxi = a[0];
    int mini = a[0];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, a[i]);
        mini = min(mini, a[i]);
        sum += a[i];
    }
    cout << "Maximum Value: " << maxi << endl;
    cout << "Minimum Value: " << mini << endl;
    cout << "Sum: " << sum << endl;

    return 0;
}
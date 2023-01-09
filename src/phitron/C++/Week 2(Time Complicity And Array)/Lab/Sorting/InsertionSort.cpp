#include <bits/stdc++.h>
using namespace std;
/*
Time Complexity -> O(n^2) [O(n^2/2)] Better than Bubble sort
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
    for (int i = 1; i < n; i++)
    {
        int indx = i;
        while (indx >= 1)
        {
            if (a[indx - 1] > a[indx])
            {
                swap(a[indx - 1], a[indx]);
                indx--;
            }
            else
            {
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
/*
7
3 4 1 2 7 6 1
3>4
break
4>1
3 1 4 index 1
3>1
1 3 4 loop exited

*/
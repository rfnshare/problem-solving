#include <bits/stdc++.h>
using namespace std;
/*
Time Complexity ->Mine O(n), O(n*log n), Pos O(n(log(logn))) [when inside iteration i*x<=n like this] 
Memory Complexity -> O(n)
*/
int is_prime(int x)
{
    int r = sqrt(x);
    int flag = 1;
    if (x == 1)
    {
        flag = 1;
    }
    else if (x == 2)
    {
        flag = 1;
    }
    else
    {
        for (int i = 2; i <= r; i++)
        {

            if (x % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }
    return flag;
}
int main()
{
    int n;
    cin >> n;
    vector<int> prime;
    for (int i = 2; i < n; i++)
    {
        if (is_prime(i) == 1)
        {
            prime.push_back(i);
        }
    }
    for (int i = 0; i < prime.size(); i++)
    {
        cout << prime[i] << " ";
    }
}
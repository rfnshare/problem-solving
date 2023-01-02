#include <bits/stdc++.h>
using namespace std;
/*
Time complexity o(2^n)
Memory complexity  o(n) for stack memeory
if ans save
Time complexity o(n)
Memory complexity  o(n) 
*/
int fib(int n)
{
    int x, y, save[100];
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (save[n] != 0)
        return save[n];
    x = fib(n - 1);
    y = fib(n - 2);
    save[n] = x + y;
    return x + y;
}
int main()
{
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}
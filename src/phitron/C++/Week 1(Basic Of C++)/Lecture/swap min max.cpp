#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int a = 5, b = 10, c = 1;
    swap(a, b);
    cout << a << endl;
    // int mini = min({a, b, c});
    // cout << "Min: " << mini << endl;
    int maxi = max(a, b);
    cout << "Max: " << maxi << endl;

    vector<int> ab;
    // a.resize(10);
    for (int i = 10; 0<i; i--)
    {
        ab.push_back(i);
    }
    for (int i = 0; i < ab.size(); i++)
    {
        cout << ab[i] << " ";
    }
    sort(ab.begin()+1,ab.begin()+2+1);
    cout<<endl<<"After Sorting"<<endl;
    for (int i = 0; i < ab.size(); i++)
    {
        cout << ab[i] << " ";
    }
    
}
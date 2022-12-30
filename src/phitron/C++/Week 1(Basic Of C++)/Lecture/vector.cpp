#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
    // a.resize(10);
    for (int i = 0; i < 10; i++)
    {
        a.push_back(i);
    }
    a.insert(a.begin() + 0, 100);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }
    cout << "After Delete" << endl;
    a.pop_back();
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}
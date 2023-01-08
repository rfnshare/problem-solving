#include <bits/stdc++.h>
using namespace std;
/*
Memory Complexity O(n)
Time Complexity
*/
class Array
{
private:
    int *arr;
    int *tmp;
    int cap;
    int sz;
    void increase_size()
    {
        cap *= 2;
        tmp = new int[cap];
        for (int i = 0; i < sz; i++)
        {
            tmp[i] = arr[i];
        }
        delete[] arr;
        arr = tmp;
    }
    void decrease_size()
    {
        cap /= 2;
        tmp = new int[cap];
        for (int i = 0; i < sz; i++)
        {
            tmp[i] = arr[i];
        }
        delete[] arr;
        arr = tmp;
    }

public:
    Array()
    {
        arr = new int[1];
        cap = 1;
        sz = 0;
    }
    Array(int x)
    {
        arr = new int[x];
    }
    void add(int pos, int x)
    {
        arr[pos] = x;
    }
    // Time Complexity O(n logn)
    void push_back(int x)
    {
        if (cap == sz)
        {
            increase_size();
        }
        arr[sz] = x;
        sz++;
    }
    // Time Complexity O(n)
    void insert(int pos, int x)
    {
        if (cap == sz)
        {
            increase_size();
        }
        for (int i = sz - 1; pos <= i; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[pos] = x;
        sz++;
    }
    // Time Complexity O(n)
    void print_info()
    {
        for (int i = 0; i < sz; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    // Time Complexity O(1)
    int size()
    {
        return sz;
    }
    // Time Complexity O(1)
    int element(int indx)
    {
        if (indx >= sz)
        {
            cout << "Out of bound\n";
            return -1;
        }
        return arr[indx];
    }
    void pop_back()
    {
        if (sz == 0)
        {
            cout << "Current SIZE is Zero";
            return;
        }
        if (cap / 2 == sz)
        {
            decrease_size();
        }
        sz--;
    }
    void erase(int pos)
    {
        if (pos >= sz)
        {
            cout << "POS not exist\n";
            return;
        }
        else
        {
            if (cap / 2 == sz)
            {
                decrease_size();
            }
            for (int i = pos + 1; i < sz; i++)
            {
                arr[i - 1] = arr[i];
            }
            sz--;
        }
    }
    ~Array()
    {
        delete[] arr;
    }
};
int main()
{
    Array a;
    // a.add(0, 10);
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
    a.push_back(40);
    a.push_back(50);
    a.print_info();
    a.insert(1, 99);
    a.pop_back();
    a.erase(1);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.element(i) << " ";
    }
}
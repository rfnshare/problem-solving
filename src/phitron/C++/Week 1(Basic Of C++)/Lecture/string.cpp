#include <iostream>
using namespace std;
int main()
{
    string s = "I am eating rice.";
    string s2 = "Hello ";
    string s3 = s2 + "World";
    // cout<<s3<<endl;
    // cout<<s[1]<<s[5]<<endl;
    // cout<<s.size()<<endl;
    // for (int i=0; i < s.size(); i++)
    // {
    //     s[i] += 1;
    // }
    s.erase(s.begin());
    s.erase(s.begin() + s.size() - 1);
    s.pop_back();
    cout << s << endl;

    return 0;
}
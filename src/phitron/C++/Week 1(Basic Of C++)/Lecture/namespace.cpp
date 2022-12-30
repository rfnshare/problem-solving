#include <iostream>
#include <fstream>
// using namespace std;
int x = 5, y, z;
int func(int a, int b);
namespace Info
{
    int x = 10;
    int func(int a, int b)
    {
        return a * b;
    }

}
int main()
{
    std::cout << Info::x << std::endl;
    int a = 5, b = 10;
    int x = Info::func(a, b);
    std::cout << x << std::endl;
    return 0;
}
int func(int a, int b)
{
    return a + b;
}
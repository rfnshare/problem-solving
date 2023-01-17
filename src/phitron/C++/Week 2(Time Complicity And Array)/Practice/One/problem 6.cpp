#include <bits/stdc++.h>
using namespace std;
class Cuboid
{
private:
    int length;
    int width;
    int height;

public:
    Cuboid()
    {
        length = 0;
        width = 0;
        height = 0;
    }
    Cuboid(int length, int width, int height)
    {
        this->length = length;
        this->width = width;
        this->height = height;
    }
    int getVolume()
    {
        return length * width * height;
    }
    int getSurfaceArea()
    {
        return 6 * length * length;
    }
    bool operator<(Cuboid s)
    {
        getVolume()<s.getVolume();
    }
};
int main()
{
    vector<Cuboid> s(5);
    s[0] = Cuboid(1,12,3);
    s[1] = Cuboid(1,2,3);
    s[2] = Cuboid(1,12,32);
    s[3] = Cuboid(11,12,3);
    s[4] = Cuboid(1,1,2);
    // for (int i = 1; i <= 5; i++)
    // {
    //     s[i] = Cuboid(i, 30-i, i);
    // }
    for (int i = 0; i < 5; i++)
    {
        cout<<"Volume & SurfaceArea of "<<i<<": "<<s[i].getVolume()<<" "<<s[i].getSurfaceArea()<<endl;
    }
    sort(s.begin(),s.end());
    cout << "After Sorting...." << endl;

    for (int i = 0; i < s.size(); i++)
    {
        cout<<"Volume of "<<i<<": "<<s[i].getVolume()<<" "<<s[i].getSurfaceArea()<<endl;
    }
}
#include <iostream>
using namespace std;
class innova
{
public:
    static int price;
    static int getprice()
    {
        return price;
    }
};
int innova::price = 20;
int main()
{
    innova i1, i2, i3;
    cout << i1.price << endl;
    cout << i3.price << endl;
    cout << innova::price << endl;
    cout << i2.getprice();
    return 0;
}
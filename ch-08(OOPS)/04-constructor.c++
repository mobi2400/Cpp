#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    // rectangle() // non parametized constructor
    // {
    //     length = 1;
    //     breadth = 1;
    // }
    rectangle(int l = 1, int b = 1) // parametized constructor 1 is when no input has been given
    {
        length = l;
        breadth = b;
    }
    rectangle(rectangle &r) // copy constructor copy the value of another constructor
    {

        length = r.length;
        breadth = r.breadth;
    }

    int area()
    {

        return length * breadth;
    }
};
int main()
{

    rectangle r(10, 5);
    rectangle r2(r);
    cout << r2.area();

    return 0;
}

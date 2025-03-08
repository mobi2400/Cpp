#include <iostream>
using namespace std;
class rectangle // rectangle is class which will store all rectangle related function
{
public: // public is written so that data can be used in main function
    int length;
    int breadth;
    int area() // these are the function
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
}; // remeber to use quation mark after semicolon it is compulsary
int main()
{
    rectangle r1, r2, r3; // r1 r2 means we can have 2 different rectangle
    r1.length = 10;
    r1.breadth = 20;
    cout << "the area of rectangle is\n"
         << r1.area(); // remeber to give bracket
    r2.length = 30;
    r2.breadth = 30;
    cout << "the perimeter is\n"
         << r2.perimeter();
    r3.length = 20;
    r3.breadth = 30;
    cout << "the area of rectangle c3 is"<< endl << r3.area();

    return 0;
}

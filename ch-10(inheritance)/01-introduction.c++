#include <iostream>
using namespace std;
class base
{
public:
    int x;
    void show()
    {
        cout << x;
    }
};

class derived : public base // here derived class can acess base class public data and func
                            //  in short it inherit base class func and data
{
public:
    int y;
    void display()
    {

        cout << y;
    }
};

int main()
{
    base b;
    b.x = 25;
    b.show();
    derived d;
    d.x = 10; // it is correct bcz derived class inherit base class
    d.y = 15;
    d.display();
    d.show(); // it has inherit function too with data

    return 0;
}
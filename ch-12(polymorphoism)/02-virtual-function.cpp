#include <iostream>
using namespace std;
class base
{
public:
    virtual void display() /*when virtual is given the func call will not
     be on ptr but object*/
    {
        cout << "display of base" << endl;
    }
};
class derived : public base
{
public:
    void display()
    {
        cout << "display of derived" << endl;
    }
};
int main()
{
    derived d;
    base *ptr = &d;
    ptr->display(); /*here derived func will work bcz base class fun is
    declared as virtual*/
    /*if virtual would not be declared then base class func would work*/
    return 0;
}
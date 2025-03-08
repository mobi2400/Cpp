#include <iostream>
using namespace std;
class base
{
public:
    void display()
    {
        cout << "display of base" << endl;
    }
};
class derived : public base
{
public:
    void display()  // overloading function(in overloading prototype should be same)
    {
        cout << "display of derived";
    }
};
int main()
{
    base r1;
    derived r2;
    r1.display(); // why always forgot to give () important hai
    r2.display(); /* here display of derived will work bcz it has overload
                   function of base class display*/
    return 0;
}
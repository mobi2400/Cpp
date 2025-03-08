#include <iostream>
using namespace std;
class base
{
public:
    void fun1()
    {
        cout << "fun 1 of base" << endl;
    }
};

class derived : public base
{
public:
    void fun2()
    {
        cout << "fun2 of derived" << endl;
    }
};
int main()
{
    derived d;
    base *ptr = &d;
    ptr->fun1(); // -> means calling
    // ptr->fun2() it cannot call bcz it is ponter of base and fun2 is in derived
    d.fun2();

    return 0;
}
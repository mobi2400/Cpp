#include <iostream>
using namespace std;
class base
{
public:
    base() { cout << "non param base" << endl; }
    base(int x) { cout << "param of base\n"
                       << x << endl; }
};
class derived : public base
{
public:
    derived() { cout << "non-param derived" << endl; }
    derived(int y) { cout << "param of derived\n"
                          << y << endl; }
    derived(int x, int y) : base(x) { cout << "param of derived\n"
                                           << y; } // in base int is not needed to write bcz it is already
                                                   // declared in derived(int x,int y)
};

int main()
{
    derived d(5, 10);

    return 0;
}
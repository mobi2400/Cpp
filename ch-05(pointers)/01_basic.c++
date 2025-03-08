#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p = &a;        // "&" gives the address of the variable
    cout << a << "\n";  // gives the value of a
    cout << &a << "\n"; // gives the address of a where value is stored
    cout << p << "\n";  // int store a address(p means pointer)
    cout << *p << "\n"; // gives the value of ints address stored
    cout << &p << "\n"; // pointer address

    return 0;
}


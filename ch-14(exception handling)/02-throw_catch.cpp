#include <iostream>
using namespace std;

int division(int a, int b)
{
    if (b == 0)
        throw 1; // if b== 0 then else return
    return a / b;
}

int main()
{
    int x = 10, y = 2, z;
    try
    {
        if (y == 0)
            throw 1;
        z = x / y;
        cout << z << endl;
    }

    catch (int e) // throw value will be saved in e
    {
        cout << "Division by Zero" << e << endl;
    }
    cout << "Bye" << endl;
    return 0;
}

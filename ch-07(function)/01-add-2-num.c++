#include <iostream>

using namespace std;

int add(int, int);
int main()
{
    int a = 10;
    int b = 20;
    int c;
    c = add(a, b);
    cout << c;

    return 0;
}

int add(int x, int y) // u can add 3rd number too like int a = 0
                      // in this u cann use this func for both 2 and 3 int
{
    int z;
    z = x + y;
    return z;
}
#include <iostream>
#include <cmath> // dont use <math.h>
using namespace std;
int main()
{
    float a, b, c, d;
    cout << "enter the value of a , b, c\n";
    cin >> a >> b >> c;
    d = ((b * b) - (4 * a * c));
    cout << "the value of d is " << d;
    cout << "\n";

    if (d == 0)
    {
        cout << "real and equal roots";
    }
    else if (d > 0)
    {
        cout << "real and uneaqual roots";
    }
    else
    {
        cout << "imaginary roots";
    }

    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // find volume of the cylinder
    float volume; // V = 3.14*r*r*h
    float r, h;
    cout << "enter the value of R and H\n";
    cout << "value of Radius\n";
    cin >> r;
    cout << "value of Height\n";
    cin >> h;
    volume = 3.142 * pow(r, 2) * h;
    // instead of r*r pow(r,2) can be used but <math.> library has to be used
    cout << "the volume cylinder is\n"
         << volume;

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    float radius;
    float area;
    cout << "enter the value of radius"<<endl;
    cin >> radius;
    area = 3.14 * radius * radius;
    cout << "the area of circle is " << area;

    return 0;
}
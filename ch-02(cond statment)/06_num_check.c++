#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter the 3 number\n";
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << "a is greatest";
    }
    else if (b > c && b > a)
    {
        cout << "b is greatest";
    }
    else
    {
        cout << "c is greatest";
    }

    return 0;
}
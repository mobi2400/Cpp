#include <iostream>
using namespace std;
int main()
{
    int a, r;
    int rev = 0;
    cout << "enter the nuumber\n";
    cin >> a;
    while (a > 0)
    {
        r = a % 10;
        rev = rev * 10 + r; // formula to reverse any number
        a = a / 10;
    }
    cout << rev;

    return 0;
}
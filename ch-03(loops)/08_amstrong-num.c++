/*An Armstrong number (also known as a narcissistic number)
 is a number that is equal to the sum of its own digits
 each raised to the power of the number of digits.*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, r, n;
    int sum = 0;
    cout << "enter the number to check amstrong\n";
    cin >> a;
    if (a < 100 || a > 999)
    {
        cout << "Please enter a valid 3-digit number.";
        return 1;
    }
    while (a > 0)
    {
        r = a % 10;
        n = pow(r, 3);
        sum += n;
        cout << "Current sum:\n " << sum;
        cout << "\n";
        a = a / 10;
    }

    cout << sum;
    return 0;
}
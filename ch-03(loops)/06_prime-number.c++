#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter the number to check its prime or not\n";
    cin >> a;
    for (int i = 2; i < a; i++)
    {
        if (a % i != 0)
        {
            cout << "prime number";
            return 0;
        }
        else
        {
            cout << "not a prime number";
            return 1;
        }
    }
}
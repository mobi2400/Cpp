#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter the number to check the factors\n";
    cin >> a;
    for (int i = 1; i <= 8; i++)
    {
        if (a % i == 0) //always use == while comapring the value
        {
            cout << i << " is factor of " << a;
        }
        cout << "\n";
    }

    return 0;
}

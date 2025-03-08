#include <iostream>
using namespace std;
int main()
{
    int a;

    cout << "enter the height of triangle\n";
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 0; j < i ; j++)
        {
            cout << " * ";
        }
        cout << "\n";
    }

    return 0;
}
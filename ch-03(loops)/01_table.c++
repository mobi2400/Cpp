#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter the number of u want table\n";
    cin >> a;
    cout << "the table is\n";
    for (int i = 0; i < 11; i++)
    {
        int b;
        b = a * i;

        cout << a << " X " << i << " = " << b;
        cout << "\n";
    }

    return 0;
}
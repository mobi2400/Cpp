#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter the no of hours u have worked?" << endl;
    cin >> a;
    if (8 < a && 20 > a)
    {
        cout << "working hour ";
    }

    else
    {
        cout << "leisure period";
    }

    return 0;
}
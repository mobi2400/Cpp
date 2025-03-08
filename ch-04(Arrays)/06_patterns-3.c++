#include <iostream>
using namespace std;
int main()
{
    int l;
    cout << "enter the length of triangle";
    cin >> l;
    for (int i = 1; i <= l; i++)
    {
        for (int j = 0; j < l; j++)
        {
            if (i + j > l - 1)
            {
                cout << " * ";
            }
            else
            {

                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
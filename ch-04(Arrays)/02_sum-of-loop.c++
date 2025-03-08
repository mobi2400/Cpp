#include <iostream>
using namespace std;

int main()

{
    int size;

    cout << "enter the size of the array\n";
    cin >> size;
    int A[size];
    int sum = 0;
    cout << "enter the  elements ofarray";
    for (int b = 0; b < size; b++)
    {
        cin >> A[b];
        sum = sum + A[b];
    }
    cout << "You entered:\n";
    for (int b = 0; b < size; b++)
    {
        cout << A[b] << "\n";
    }

    cout << "the sum is " << sum;
    return 0;
}
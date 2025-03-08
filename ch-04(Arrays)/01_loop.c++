#include <iostream>
using namespace std;
int main()
{
    char A[] = {'A', 66, 'C', 'D'};

    for (char x : A) // int gives value of alphabst and (auto and char) gives aphabtes for number
    {
        cout << x;
        cout << "\n";
    }

    return 0;
}
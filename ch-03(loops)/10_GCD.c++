#include <iostream>

using namespace std;

int main()
{
    // find the GCD of the given number
    int a, b;

    cout << "Give the 2 number to find GCD(write numbers in ascending order)\n";
    cin >> a >> b;
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0 && b & i)
        {
            cout << "the common factor is" << i;
            cout << "\n";
        }
       

    }
      
// question was to print GCD but i printed common factor


    return 0;
}
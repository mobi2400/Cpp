#include <iostream>
using namespace std;
int main()
{
    // find the factorial of the given number
    int n, a;
    unsigned long long fact = 1; // used to store large int
    cout << "enter the number\n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << fact;

    return 0;
}
/*earlier the code was givving garbage value bcz i havent stored the factorial in  
unsigned long long fact = 1
instaed i used int only which cannot store big int*/
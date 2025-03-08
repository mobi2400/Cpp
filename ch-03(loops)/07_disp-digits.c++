// display digits of a number

#include <iostream>
using namespace std;
int main()
{
    int r, n, a,d;
    cout<<"enter the number of digits u r entering\n";
    cin>>d;
    cout << "enter the number\n";
    cin >> a;
    for (int  i = 0; i < d; i++)
    {
    if (a > 0)
    {
        r = a % 10;
        a = a / 10;
        cout << r;
        cout << "\n";
    }
        
    }
    

    return 0;
}
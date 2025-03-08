#include <iostream>
int compare(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter the 3 number to compare\n";
    cin >> a >> b >> c;

    cout<<"the greatest number is "<<compare(a, b, c); // u can store compare in new var

    return 0;
}
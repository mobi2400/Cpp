#include <iostream>
using namespace std;
int main()
{
    int a;
    int sum = 0;
    cout << "enter the number to check the perfect numebr\n";
    cin >> a;
    for (int i = 1; i <= 8; i++)
    {
        if (a % i == 0)
        {
            sum += i;
        }
    }
    cout << "the sum of factor is" << sum;
    cout<<"\n";
    if (a * 2 == sum)
    {
        cout << "perfect number";
    }

    return 0;
}
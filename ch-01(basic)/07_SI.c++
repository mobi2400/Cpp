#include <iostream>

using namespace std;
int main()
{
    float SI; // SI = (P*R*T)/100
    int P, R, T;
    cout << "enter the value of P,R,T\n";
    cout << "principle\n";
    cin >> P;
    cout << "Rate\n";
    cin >> R;
    cout << "Time\n";
    cin >> T;
    SI = (P * R * T) / 100;
    cout << "the simple entrest is\n";
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    float BS, PA, PD;
    float NS;
    cout << "enter the basic salary\n";
    cin >> BS;
    cout << "enter the percentage of alllowance\n";
    cin >> PA;
    cout << "enter the percentage of deduction\n";
    cin >> PD;
    NS = BS + (BS * PA) - (BS * PD);
    cout << "the net salary is" << NS;

    return 0;
}
#include <iostream>
#include <string>
using namespace std;
class employee
{
public:
    string name;
    int wages;
    int salaray;
    employee(string n = "", int s = 0) // always declare as s = 0 & n = "" as it helps
    {
        name = n;
        salaray = s;
    }
};

int main()
{
    employee r1("mobi", 2500); // string should be in double quotes always
    employee r2;
    r2.name = "hello";
    cout << r2.name << endl;
    cout << "name of employee is " << r1.name;

    return 0;
}
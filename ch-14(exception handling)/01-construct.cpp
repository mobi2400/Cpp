#include <iostream>
using namespace std;
int main()
{
    int x = 10, y = 0, z;
    try // to check if its ok then run otherwise go for catch(same like if else)
    {
        if (y == 0)
            throw 1; // throw means to display and it will store in e
        z = x / y;
        cout << z << endl;
    }
    catch (int e) // e is what is thrown in if which is 1 here
    {
        cout << "divison by zero\n" << e << endl;
    }

    return 0;
}
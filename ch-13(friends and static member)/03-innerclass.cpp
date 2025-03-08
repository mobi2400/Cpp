#include <iostream>
using namespace std;
// problem in this code work on it

class Outer
{

public:
    void fun()
    {
        i.display();
    }
    class Inner
    {
    public:
        void display()
        {
            cout << "Display of Inner" << endl;
        }
    };

    Inner i;
};

int main()
{

    Outer::Inner i; // cannot be accessed as it is private
    
}

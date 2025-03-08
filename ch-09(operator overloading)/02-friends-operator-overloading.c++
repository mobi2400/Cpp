#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    void display() // void means it will not give any output
    {
        cout << real << "+i" << img;
    }

    friend Complex operator+(Complex c1, Complex c2);
    // friend is used to help to access operator
    // in which non member function(means function out of the class) can acess private files of func
    /* The friend keyword is used in this code to allow
    the operator+ function access to the private members of the Complex class*/
};

Complex operator+(Complex c1, Complex c2) // it can be written anywhere like below main func
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

int main()
{
    Complex c1(5, 3), c2(10, 5), c3;
    c3 = c1 + c2;

    c3.display();
}

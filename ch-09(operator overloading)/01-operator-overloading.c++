#include <iostream>
using namespace std;
class complex
{
public:
    int real;
    int img;

    complex add(complex c) // complex1 is added in complex c
    // instead of add operator(+,-,*,/) can be also written
    {
        complex temp; // temp complex is craeted to store complex and complex c add
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
};
int main()
{
    complex c1, c2, c3; // three complex are there c1,c2,c3
    c1.real = 5;
    c1.img = 3;
    c2.real = 10;
    c2.img = 5;

    c3 = c2.add(c1); // c2 will be added with c1 and stored in c3
    // after writting operator() simple wrie + -
    cout << c3.real << "+i" << c3.img;
    return 0;
}
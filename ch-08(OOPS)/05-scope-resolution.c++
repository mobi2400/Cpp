#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle(int l = 1, int b = 1)
    {
        length = l;
        breadth = b;
    }
    int perimeter(); // declaration(just declaring func here main body of funv is below main func)
};
int main()
{
    rectangle r(20,20);
    cout << r.perimeter();

    return 0;
}
int rectangle ::perimeter() // whenever there is something complex in class dont write there
{
    return 2*(length + breadth);
}
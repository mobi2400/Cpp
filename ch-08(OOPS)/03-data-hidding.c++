#include <iostream>
using namespace std;

class rectangle
{
private: // now these two are private cannot be acesssed directly
    int length;
    int breadth;

public:
    int setlength(int l) // use to set length mutators
    {

        if (l >= 0)
            length = l;
        else
        cout<<"invalid length\n";// can be only work if int is used instead of void

            length = 1;
    }
    void setbreadth(int b) // cout can not be used as function is define as void
    {

        if (b >= 0)
            breadth = b;
        else

            breadth = 1;
    }

    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
int main()
{
    rectangle r;
    r.setlength(-10);
    r.setbreadth(20);
    cout <<"area is "<< r.area();
    return 0;
}

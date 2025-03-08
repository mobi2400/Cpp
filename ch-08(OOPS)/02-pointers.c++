#include <iostream>

class rectangle 
{
public: 
    int length;
    int breadth;
    int area() 
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
using namespace std;
int main()
{

 rectangle r1;
 rectangle *ptr;
 ptr = &r1; // stores the value of r1 in pointer
 ptr->length=10; //-> is used to access pointer
 ptr->breadth=5;
 cout<<ptr->area();


    return 0;
}

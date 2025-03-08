#include <iostream>
using namespace std;
class test
{
public:
    int a;
    static int count; //global variable
    test()
    {
        a = 10;
        count++;
    }
    static int getcount()
    {
    
        return count;
    }
};
int test ::count = 0; // now count is only accesible in test class
int main()
{
    test t1, t2;
    cout << t1.count << endl;
    cout << t2.count << endl;
    t1.count = 25;
    cout<<t2.count<<endl; // single count variable for both t1 and t2
    cout<<test::getcount()<<endl;
    return 0;
}

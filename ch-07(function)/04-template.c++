#include <iostream>
template <class T>
T maxim(T x, T y)
{
    if (x > y)
    {
        return x;
    }
    else
        return y;
    /*instead of writting all if else u can write
    return x>y?x:y  it means if x > y then return x else return y*/
}
using namespace std;
int main()
{

    int c = maxim(20, 10);
    // when max is used error shows that its a ambigious statement(dont know the reason)
    cout << c;
    return 0;
}
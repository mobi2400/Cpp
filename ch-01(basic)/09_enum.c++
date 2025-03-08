#include <iostream>
using namespace std;
enum day
{
    mon,  // 0 is by default we can modify the value like mon=1
    tue,  // tue=7
    wed,  // wed=91
    thur, // like this only we can change and next word number will continue from last nmber with +1
    fri,
    sat,
    sun,
};
/* enum  is a user-defined data type that consists of a set of named integral constants.
It enhances code readability by allowing the use of descriptive names instead of numeric values.
the first enumerator is assigned the value 0, with subsequent values incrementing by one.
*/
int main()
{
    day a, b, c, d, e, f, g;
    a = mon;
    b = tue;
    c = wed;
    d = thur;
    e = fri;
    f = sat;
    g = sun;
    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";
    cout << d << "\n";
    cout << e << "\n";
    cout << f << "\n";
    cout << g << "\n";
    return 0;
}

// tyedef is used to define a variable is useful when u are writing lengthy code.
// should be used before int main().
// when u define var in typedef then u dont neeed to define again in main code.
// u can simple start working with variables by just nameing it.
//   #include <iostream>
//   using namespace std;
//    typedef int marks;
//    int main()
//    {

//     marks m1,m2; no need to define here that marks is int it is define earlier only
//     m1 = 50
//     m2 = 30
//     return 0;
//    }
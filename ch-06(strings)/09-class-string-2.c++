#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str = "mobasshir";
    cout << str.append(" BOSS") << "\n";     // use to add word in string at last
    cout << str.insert(3, "l") << "\n";      // use to insert word in given index
    cout << str.replace(3, 3, "ii") << "\n"; // use to replace words in string at given index
    // cout<<str.erase()<<"\n" it will erase string
    str.pop_back(); // erase last letter of string
    cout << str;
    //    str1.swap(str2); swap 2 string

    return 0;
}
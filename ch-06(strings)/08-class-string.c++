#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str = "mobasshir";
    cout << "length of string is\n";
    cout << str.length() << "\n"; // s.length(); used to find length of string
    cout << "size of string is\n";
    cout << str.size() << "\n"; // s.size();  same as length
    cout << "capacity of string is\n";
    cout << str.capacity() << "\n"; // s.capacity(); gives capacity of string like how much more u can add
    cout << "max size of string is\n";
    cout << str.max_size() << "\n"; // s.max_size(); to give maximum possible size of an string
    cout << "to check string is  empty or not\n";
    cout << str.empty() << "\n"; // s.empty(); to check wheter string is empty or not

    return 0;
    // s.resize(); to resize the string
    // s.clear(); to clear the string
}
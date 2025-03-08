#include <iostream>
using namespace std;
int main(void)
{

// string name;
// cout << "enter your name ?\n";
// getline(cin, name);
// cout << "welcome " << name;
//this code gives the same output but avoid it

    char s[20]; 
/*here i have restricted the length of the array
always restrict the string length it gives clarity
to the code*/
    cout << " Enter your name";
    cin.getline(s, 20); // easy to read syntax, always use this
    cout << "welcome " << s;

    return 0;
}
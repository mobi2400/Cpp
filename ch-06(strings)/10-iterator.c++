#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    // itterators is used to access string
  string str = "today";
  string::iterator it; //declaring the itterators
  for (it = str.begin(2); it !=str.end() ; it++)
  {
    cout<<*it;
  }
   




    return 0;
}
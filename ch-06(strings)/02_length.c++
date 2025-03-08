#include <iostream>
#include <cstring> // used to operate with string like strlen
using namespace std;
int main()
{
   char s[20];
   cout<<"enter the name\n";
   cin>>s;//to use multiple word use cin.getline(s,20)[20 shows the max]
   cout<<"length of  your name is\n"<<strlen(s);


    return 0;
}
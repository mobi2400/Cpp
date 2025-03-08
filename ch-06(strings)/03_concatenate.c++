#include <iostream>
#include <cstring> // used to operate with string like concatenate
// concatenate means to add 2 string
using namespace std;
int main()
{
   char s1[20];
   char s2[20];
   cout<<"enter the name\n";
   cin>>s1;
   cin>>s2;
   strncat(s1,s2,13); //used to add 2 string, 13 shows maximum char to take
   cout<<" your name is \n"<<s1;


    return 0;
}
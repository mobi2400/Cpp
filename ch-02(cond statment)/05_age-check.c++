#include <iostream>
using namespace std;
int main()
{
   int a;
   cout<<"enter your age(not for less than 12)\n";
   cin>>a;
   if (a >= 12 && a < 50)
   {
    cout<<"you are young";
   }
   else
   {
    cout<<"you are old";
   }
   

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
  char a,b; // char is used to take alphabets
/*in this numberic value of a and b is used as alphabates are nothing but a number
 numeric value of A and a is different*/
  int c;

  cin>>a>>b;
  
  c=a%b; // % is used to get the reminder

  cout<<"the reminder is\n"<<c;
  return 0;
}
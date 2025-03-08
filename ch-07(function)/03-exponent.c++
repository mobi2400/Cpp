#include <iostream> 
#include <cmath>
int expo(int a ,int b)
{
   int c;
   c = pow(a,b);
   return c;

}
using namespace std;
int main()
{
  int a = 2;
  int b = 2;
  int c= expo(a,b);
  cout<<c;


    return 0;
}
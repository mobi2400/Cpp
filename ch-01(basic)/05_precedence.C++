#include <iostream>
// here simple calculation has been done so no neeed to add <cmath>
/* #include <cmath>  is used for complex arithamtic calculation like square root(sqrt)
and exponent(pow(x,2)) and many more(log trignometery)
*/
using namespace std;
int main()
{
  int a, b, c, d;
  cout << "give the value of length and breadth\n";
  cout << "length\n"; //\n can be replaced  by endl
  cin >> a;
  cout << "breadth\n";
  cin >> b;
  c = a * b;
  d = 2 * (a + b);
  /* (*) is compulsary as computer dont understand direct multiplication
  handle () with care as compuational calc is different than real one*/
  cout << "the the area of the rectangle is\n"
       << c;
  cout << "\n"; // write endl in above cout 
  cout << "the the perimeter of the rectangle is\n"
       << d;
  return 0;
}
#include <iostream>
using namespace std;
int main()
{
  float M1, M2, M3, AVG;
  cout << "enter the marks u have obtained in 3 subjects\n";
  cin >> M1 >> M2 >> M3;
  AVG = ((M1 + M2 + M3) / 3);
  cout << "your AVG is\n"
       << AVG;
  cout << "\n";
  if (AVG >= 60)
  {
    cout << "your grade is A";
  }
  else if (AVG < 60 && AVG >= 35)
  {
    cout << " your grade is B";
  }
  else
  {
    cout << "your grade is C";
  }

  return 0;
}
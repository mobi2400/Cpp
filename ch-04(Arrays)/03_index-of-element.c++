#include <iostream>
using namespace std;
int main()
{
   int A[6] = {1 , 2, 3, 4, 5, 6};
   cout<<"find the index of 3 in an arrray\n";
   for (int i = 0; i < 6; i++)
   {
        if (A[i] == 3)
        {
           cout<<"index is "<<i;
        }
        
   }
   


    return 0;
}
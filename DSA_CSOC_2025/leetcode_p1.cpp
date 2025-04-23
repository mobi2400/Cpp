/*Write a function that reverses a string. The input string is given as an array of characters s. You must do this by modifying the input array in-place with O(1) extra memory.*/


#include <iostream>
using namespace std;
int  main(){
   int length;

   cout<<"enter the length of an array"<<endl;
   cin>>length;
   int A[length];
   cout<<"enter the array"<<endl;
   for (int i = 0; i < length; i++)
   {
        cin>>A[i];
   }
   int goodPairs =0;
   for (int i = 0; i < length; i++)
   {
    for (int j = i+1; j < length; j++)
    {
        if (A[i]==A[j])
        {
            goodPairs++;
        }
        
    }
    
   }
    cout<<goodPairs;



    return 0;
}

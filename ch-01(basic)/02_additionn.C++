#include <iostream> // iostream is the library
using namespace std; // after this u dont need to write std before anything(cout)
int main()
{ 
    int a,b,c;
    cout<<"enter 2 number\n";
    cin>>a>>b; // cin is to take input from the user
/* getline(cin,name); is used to take more than one variable especailly used in name
like mobasshir khan there is 2 variable so cin cant be dierectly used bcz it will
only read mobasshir*/
    c = a+b; 
    cout<<"addition is"<<c; // variables should not be in ""       
    
    return 0;
}
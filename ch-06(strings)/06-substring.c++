#include <iostream>
#include <cstring> //used to operate with string like sub-string
using namespace std;
int main()
{
    char s1[20] ="mobasshir";
    char s2[20] ="s";

    cout<<strstr(s1,s2)<<endl;
    //strstr means subset of main set here s1 is main set and s2 is subset

    return 0;
} 
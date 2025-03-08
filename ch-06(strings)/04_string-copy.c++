#include <iostream>
#include <cstring> // used to operate with string like string copy
using namespace std;
int main()
{
    char s1[10] = "hello";
    char s2[10] = "boy";
    strcpy(s2, s1, );
    /*strncpy can be also used but u have give the
    no values to be copied like strncpy(s2,s1,2) 2 gives
    the no of alph to be copied*/
    /*used to ccopy str s1 value will be copied to s2.
     it will be copied not shifted or intercharge
     s1 value will be in s1 only it will just copy to s2*/
    cout << s2;
    //   strcpy(s1,s2);
    //   cout<<s1;
    // here s1 will hello only bcz now str s2 contains s1 value only
    return 0;
}
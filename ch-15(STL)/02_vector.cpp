// #include <iostream>
// #include <vector>
#include<bits/stdc++.h>// sexy library add all important library by itself
using namespace std;
int main(){
    vector<int> v={10,20,30,40};
    v.push_back(25);
    v.push_back(70);
    v.pop_back();
    // for(int x:v){
    //     cout<<x<<" ";
    // }
    vector<int>:: iterator itr = v.begin();
    for(itr=v.begin();itr!=v.end();itr++)
        cout<<*itr<<" ";

    return 0;
}

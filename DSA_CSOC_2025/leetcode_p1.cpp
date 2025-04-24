/*Write a function that reverses a string. The input string is given as an array of characters s. You must do this by modifying the input array in-place with O(1) extra memory.*/


// 
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> A;
    int goodpoints =0;
    cin>>A;
    vector<int>:: iterator itr;
    vector<int>:: iterator itr1;
    for(itr=v.begin();itr!=A.end();itr++){
        for(itr1=itr+1;itr1!=A.end();itr1++){
            if(A[itr]==A[itr1]){
                goodpoints++;
            }
    
}}
cout<<goodpoints;
}
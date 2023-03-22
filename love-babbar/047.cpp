//reverse a string

#include<iostream>
#include<bits/stdc++.h>
using namespace std;




int main(){
    string str;
    cin>>str;
    cout<<str<<endl;

    ////1st method inbuilt function
    ////TC=O(N) SC=O(1)
    //reverse(str.begin(),str.end());

    ////2nd method using temp variable
    ////TC=O(N) SC=O(1)
    // for(int i=0;i<str.size()/2;++i){
    //     char temp = str[i];
    //     str[i] = str[str.size()-1-i];
    //     str[str.size()-1-i] = temp;
    // }

    //3rd method - use 2 pointer
    //TC=O(N) SC=O(1)
    int i=0;
    int j=str.size()-1;
    while(i<=j){
        swap(str[i],str[j]);
        ++i;
        --j;
    }

    // //4th method = use stack, but it would be just for printing
    ////tc = o(n) sc=o(n)
    // stack<char> st;
    // for(int i=0;i<str.size();++i){
    //     st.push(str[i]);
    // }
    // while(st.empty()!=0){
    //     cout<<st.top()<<" ";
    // }
    // cout<<endl;
    cout<<str<<endl;



    return 0;
}
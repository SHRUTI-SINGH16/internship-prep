#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//TC=O(1) SC=O(1)
bool leapyear(int x){
    if(x%400==0){
        return true;
    }else if(x%4==0 && x%100!=0){
        return true;
    }
    return false;
}

int main(){
    int year;
    cin>>year;
    bool ans = leapyear(year);
    cout<<ans<<endl;
    return 0;
} 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// //using arithmetic operators + and -
// //TC=O(1) SC=O(1)
// void swapp(int &x, int &y){
//     x = x+y;
//     y = x-y;
//     x = x-y;
// }

//using arithmetic operators * and /
//TC=O(1) SC=O(1)
//for this code to work y!=0
void swapp(int &x, int &y){
    x = x*y;
    y = x/y;
    x = x/y;
}

int main(){
    int x=10;
    int y=20;
    cout<<"X: "<<x<<" Y: "<<y<<endl;
    swapp(x,y);
    cout<<"X: "<<x<<" Y: "<<y<<endl;
    return 0;
}
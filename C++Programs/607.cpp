#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// //using temp variable and pointers
// void swapp(int *x, int *y){
//     int temp;
//     temp = *x;
//     *x=*y;
//     *y=temp;
// }

//using temp variable and reference
void swapp(int &x, int &y){
    int temp;
    temp = x;
    x=y;
    y=temp;
}

int main(){
    int x=10;
    int y=20;
    cout<<"X: "<<x<<" Y: "<<y<<endl;
    swapp(x,y);  //with using reference
    // swapp(&x,&y);  //with using pointers
    // swap(x,y);  //library function
    cout<<"X: "<<x<<" Y: "<<y<<endl;
    return 0;
}
#include<iostream>
using namespace std;

// void count(int n){
//     int res = 0;
//     while(n>0){
//         if(n%2!=0){
//             res++;
//         }
//         n=n/2;
//     }
//     cout<<res<<endl;
// }

// void count(int n){
//     int res = 0;
//     while(n>0){
//         if(n&1==1){
//             res++;
//         }
//         n=n>>1;
//     }
//     cout<<res<<endl;
// }

// void count(int n){
//     int res = 0;
//     while(n>0){
//         res = res + (n&1);
//         n=n>>1;
//     }
//     cout<<res<<endl;
// }

void count(int n){
    int res = 0;
    while(n>0){
        n = n&(n-1);
        res++;
    }
    cout<<res<<endl;
}



int main(){
    int n;
    cin>>n;
    count(n);
    return 0;
}
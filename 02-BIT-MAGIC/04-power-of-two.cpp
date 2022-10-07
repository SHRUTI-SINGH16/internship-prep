#include<iostream>
using namespace std;

// bool powertwo(int n){
//     if(n==0){
//         return false;
//     }
//     while(n!=1){
//         if(n%2!=0){
//             return false;
//         }
//         n=n/2;
//     }
//     return true;
// }

// bool powertwo(int n){
//     int res = 0;
//     while(n>0){
//         n = n&(n-1);
//         res++;
//     }
//     if(res==1){
//         return true;
//     }
//     return false;
// }

bool powertwo(int n){
    if(n==0){
        return false;
    }
    return ((n&(n-1))==0);
}



int main(){
    int n;
    cin>>n;
   cout<< powertwo(n);
    return 0;
}
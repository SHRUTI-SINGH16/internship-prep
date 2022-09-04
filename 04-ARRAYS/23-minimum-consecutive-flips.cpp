#include<iostream>
#include<bits/stdc++.h>
using namespace std;



// //TC=O(N) SC=O(1)
// //to count the number of flips
// void flips(int arr[],int n){
//     int count = 0;
//     for(int i=0;i<n-1;++i){
//         if(arr[i]==0 && arr[i+1]==1 || arr[i]==1 && arr[i+1]==0){
//             count++;
//         }
//     }
//     if(count%2==0){
//         cout<<count/2<<endl;
//     }else{
//         cout<<count/2 + 1<<endl;
//     }
// }

//TC=O(N) SC=O(1)
//to print the index from where to where we need to flip the elements
// 011100110
void flips(int arr[],int n){
    for(int i=1;i<n;++i){
        if(arr[i]!=arr[i-1]){
            if(arr[i]!=arr[0]){
                cout<<"From "<<i<<" to ";
            }else{
                cout<<i-1<<endl;
            }
        }
    }
    if(arr[n-1]!=arr[0]){
            cout<<n-1<<endl;
    }

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    flips(arr,n);

}



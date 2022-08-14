#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// //TC=O(N^2)  SC=O(1)
// void longsub(int arr[],int n){
//     int count = 1;
//     int largest = 1;
//     for(int i=0;i<n;++i){
//         count = 1;
//         for(int j=i+1;j<n;++j){
//             if(arr[j]%2==0 && arr[j-1]%2!=0 || arr[j]%2!=0 && arr[j-1]%2==0){
//                 count++;
//                 largest = max(count,largest);
//             }else{
//                 break;
//             }
//         }
//     }
//     cout<<largest;
// }

//TC=O(N) SC=O(1)
//KADANES ALGO
void longsub(int arr[],int n){
    int count = 1;
    int largest = 1;
    for(int j=1;j<n;++j){
        if(arr[j]%2==0 && arr[j-1]%2!=0 || arr[j]%2!=0 && arr[j-1]%2==0){
            count++;
            largest = max(count,largest);
        }else{
            count = 1;
        }
    }
    cout<<largest;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    longsub(arr,n);

}



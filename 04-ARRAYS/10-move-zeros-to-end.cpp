#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// //extra space     TC=O(N)  SC=O(N)
// void movezeroatend(int arr[], int n){
//     int brr[n];
//     int count = 0;
//     for(int i=0;i<n;++i){
//         if(arr[i]==0){
//             count++;
//         }
//     }
//     for(int i=0;i<count;++i){
//         brr[i] = 0;
//     }
//     for(int i=0;i<n;++i){
//         if(arr[i]!=0){
//             brr[count] = arr[i];
//             count++;
//         }
//     }
//     for(int i=0;i<n;++i){
//         cout<<brr[i]<<" ";
//     }
// }

//without extra space
void movezeroatend(int arr[],int n){
    int size = n-1;
    int count = 0;
    for(int i=n-1;i>=0;--i){
        if(arr[i]!=0){
            arr[size]=arr[i];
            size--;
        }else{
            count++;
        }
    }
    for(int i=0;i<count;++i){
        arr[i] = 0;
    }
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    } 
    movezeroatend(arr,n);

}
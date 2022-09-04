#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// // tc = O(N^2)  SC=O(1)
// int repeat(int arr[],int n){
//     for(int i=0;i<n;++i){
//         for(int j=i+1;j<n;++j){
//             if(arr[i]==arr[j]){
//                 return arr[i];
//             }
//         }
//     }
//     return -1;
// }

// //TC=O(logn) SC=O(1)
// int repeat(int arr[],int n){
//     sort(arr,arr+n);
//     for(int i=0;i<n-1;++i){
//         if(arr[i]==arr[i+1]){
//             return arr[i];
//         }
//     }
//     return -1;
// }


// //tc=O(N)  BUT SC=O(N)
// int repeat(int arr[],int n){
//     bool visited[n] = {false,false,false,false,false,false};
//     for(int i=0;i<n;++i){
//         if(visited[arr[i]]==true){
//             return arr[i];
//         }
//         visited[arr[i]] = true;
//     }
//     return -1;
// }

//tc= o(n) and sc=o(1)
int repeat(int arr[],int n){
    int slow = arr[0] + 1;
    int fast = arr[0] + 1;
    do{
        slow = arr[slow]+1;
        fast = arr[arr[fast]+1]+1;
    }while(slow!=fast);

    slow = arr[0]+1;
    while(slow!=fast){
        slow = arr[slow] + 1;
        fast = arr[fast] + 1;
    }
    return slow-1;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    cout<<repeat(arr,n); 
}



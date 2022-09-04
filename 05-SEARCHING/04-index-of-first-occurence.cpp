#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//TC = O(N) SC=O(1)   LINEAR SEARCH
// int firstoccur(int arr[],int n, int x){
//     for(int i=0;i<n;++i){
//         if(arr[i]==x){
//             return i;
//         }
//     }
//     return -1;

// }

// //TC=O(LOGN) SC=O(logn)  BINARY SEARCH RECURSIVE
// int firstoccur(int arr[],int n, int x, int low, int high){
//     if(low>high){
//         return -1;
//     }
//         int mid = (low+high)/2;
//         if(arr[mid]>x){
//             return firstoccur(arr,n,x,low,mid-1);
//         }else if(arr[mid]<x){
//             return firstoccur(arr,n,x,mid+1,high);
//         }else if(arr[mid]==x){
//             if(mid==0 || arr[mid]!=arr[mid-1]){
//                 return mid;
//             }else{
//                 return firstoccur(arr,n,x,low,mid-1);
//             }
//         }
// }


//TC=O(LOGN) SC=O(1)  BINARY SEARCH ITERATIVE
int firstoccur(int arr[],int n, int x){
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>x){
            high = mid-1;
        }else if(arr[mid]<x){
            low = mid+1;
        }else if(arr[mid]==x){
            if(mid==0 || arr[mid]!=arr[mid-1]){
                return mid;
            }else{
                high = mid-1;
            }
        }
    }
    return -1;
}



int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    
    cout<<firstoccur(arr,n,x);
    // cout<<firstoccur(arr,n,x,0,n-1);   //for recursive function

}



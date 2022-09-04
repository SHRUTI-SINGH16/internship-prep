#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// //TC = O(N) SC=O(1)   LINEAR SEARCH
// int countoccur(int arr[],int n){
//     int count = 0;
//     for(int i=0;i<n;++i){
//         if(arr[i]==1){
//             return n-i;
//         }
//     }
//     return 0;
// }

int countoccur(int arr[],int n){
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==0){
            low = mid +1;
        }else{
            if(mid==0 || arr[mid-1]!=arr[mid]){
                return n-mid;
            }else{
                high - mid-1;
            }
        }
    }
    return 0;
}



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    cout<<countoccur(arr,n);

}



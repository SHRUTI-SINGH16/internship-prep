#include<bits/stdc++.h>
using namespace std;

//TC=O(N^2) SC=O(1)
// int rainw(int arr[],int n){
//     int water = 0;
//     int lmax,rmax;
//     for(int i=1;i<n-1;++i){
//         lmax = arr[i];
//         rmax = arr[i];
//         for(int j=0;j<i;++j){
//             lmax = max(lmax,arr[j]);
//         }
//         for(int j=i+1;j<n;++j){
//             rmax = max(rmax,arr[j]);
//         }
//         water = water + min(lmax,rmax) - arr[i];
//     }
//     return water;
// }





//TC=O(N)   SC=O(n)
int rainw(int arr[],int n){
    int water = 0;
    int lmax[n],rmax[n];
    lmax[0] = arr[0];
    rmax[n-1] = arr[n-1];
    for(int i=1;i<n-1;++i){
        lmax[i] = max(lmax[i-1],arr[i]);
    }
    for(int i=n-2;i>=0;--i){
        rmax[i] = max(rmax[i+1],arr[i]);
    }
    for(int i=1;i<n-1;++i){
        water = water + min(lmax[i],rmax[i]) - arr[i];
    }
    return water;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    } 
    cout<<rainw(arr,n);
    
    return 0;
}
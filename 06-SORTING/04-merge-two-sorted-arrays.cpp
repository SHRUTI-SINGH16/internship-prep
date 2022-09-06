#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// //TC=O((n+m)log(n+m)) sc=o(n+m)
// void mergearray(int arr[],int brr[],int n, int m){
//     int ans[n+m];
//     for(int i=0;i<n;++i){
//         ans[i] = arr[i];
//     }
//     for(int i=0;i<m;++i){
//         ans[n+i] = brr[i];
//     }
//     sort(ans,ans+m+n);
//     for(int i=0;i<n+m;++i){
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;
// }

//TC=O(n+m) sc=o(1)
void mergearray(int arr[],int brr[],int n, int m){
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(arr[i]<=brr[j]){
            cout<<arr[i]<<endl;
            ++i;
        }else{
            cout<<brr[j]<<endl;
            ++j;
        }
    }
    while(i<n){
        cout<<arr[i]<<endl;
        ++i;
    }
    while(j<m){
        cout<<brr[j]<<endl;
        ++j;
    }
    
    
}


int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    int brr[m];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    for(int i=0;i<m;++i){
        cin>>brr[i];
    }
    mergearray(arr,brr,n,m); 
    
}



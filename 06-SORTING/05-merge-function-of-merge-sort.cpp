#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//TC=O(n) sc=o(n)
void mergefunction(int arr[],int n, int low, int mid, int high){
    int nleft = mid+1-low;
    int nright = high-mid;
    int left[nleft];
    int right[nright];
    for(int i=0;i<nleft;++i){
        left[i] = arr[low+i];
    }
    for(int i=0;i<nright;++i){
        right[i] = arr[nleft+i];
    }

    int i=0;
    int j=0;
    int k=0;
    while(i<nleft && j<nright){
        if(left[i]<=right[j]){
            arr[k] = left[i];
            ++i;
            ++k;
        }else{
            arr[k] = right[j];
            ++j;
            ++k;
        }
    }
    while(i<nleft){
        arr[k] = left[i];
        ++k;
        ++i;
    }
    while(j<nright){
        arr[k] = right[j];
        ++k;
        ++j;
    }

    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
}


int main(){
    int n;
    cin>>n;
    int low,mid,high;
    cin>>low>>mid>>high;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    
    mergefunction(arr,n,low,mid,high); 
    
}



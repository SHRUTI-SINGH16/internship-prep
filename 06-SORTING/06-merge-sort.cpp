#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// 10 5 30 15 7
void mergefunction(int arr[],int low, int mid, int high){
    int nleft = mid+1-low;
    int nright = high-mid;
    int left[nleft];
    int right[nright];
    for(int i=0;i<nleft;++i){
        left[i] = arr[low+i];
    }
    for(int j=0;j<nright;++j){
        right[j] = arr[nleft+j];
    }

    int i=0;
    int j=0;
    int k=low;
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
}

void mergeSort(int arr[],int l, int r){
    if(r>l){
        int mid = l + (r-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        mergefunction(arr,l,mid,r);
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    
    mergeSort(arr,0,n-1); 
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}



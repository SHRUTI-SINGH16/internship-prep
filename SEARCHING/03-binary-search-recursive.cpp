#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binary(int arr[],int n, int x,int low, int high){
    if(low>high){
        return -1;
    }
    int mid = (low+high)/2;
    if(arr[mid]==x){
        return mid;
    }else if(arr[mid]>x){
        binary(arr,n,x,low,mid-1);
    }else if(arr[mid]<x){
        binary(arr,n,x,mid+1,high);
    }

}

int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    
    cout<<binary(arr,n,x,0,n-1);

}



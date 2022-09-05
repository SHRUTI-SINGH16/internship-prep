#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//TC=O(n^2) sc=o(1)
void insertionsort(int arr[],int n){
    for(int i=1;i<n;++i){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    insertionsort(arr,n); 
}



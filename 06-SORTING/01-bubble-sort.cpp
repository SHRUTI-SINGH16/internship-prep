#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//TC=O(n^2)  sc=O(1)
void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;++i){
        bool swapped = false;
        for(int j=0;j<n-i-1;++j){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
                swapped = true;
            }
        }
        if(swapped==false){
            break;
        }
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
    bubblesort(arr,n); 
}



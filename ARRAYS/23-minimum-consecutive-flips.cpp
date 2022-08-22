#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int ksumsubarray(int arr[],int n, int k){
    int curr_sum = 0;
    for(int i=0;i<k;++i){
        curr_sum = curr_sum + arr[i];
    }
    int max_sum = INT_MIN;
    for(int i=k;i<n;++i){
        curr_sum = curr_sum + arr[k] - arr[k-i];
        max_sum = max(curr_sum,max_sum); 
    }
    return max_sum;

}

int main(){
    int n,k;
    cin>>n,k;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    cout<<ksumsubarray(arr,n,k);

}



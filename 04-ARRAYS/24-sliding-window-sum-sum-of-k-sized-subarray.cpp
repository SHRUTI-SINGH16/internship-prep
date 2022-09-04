#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//find the max k-sized subarray sum with sliding window
//1 8 30 -5 20 7
//o/p = 45
int ksumsubarray(int arr[],int n, int k){
    int curr_sum = 0;
    for(int i=0;i<k;++i){
        curr_sum = curr_sum + arr[i];
    }
    int max_sum = curr_sum;
    for(int i=k;i<n;++i){
        curr_sum = curr_sum + arr[i] - arr[i-k];
        max_sum = max(curr_sum,max_sum); 
    }
    return max_sum;

}

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    cout<<ksumsubarray(arr,n,k);

}



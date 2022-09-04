#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//find if a k-sized subaary of target sum exists
//1 8 30 -5 20 7
//o/p = 45
bool ksumsubarray(int arr[],int n,int k, int sum){
    int curr_sum = 0;
    for(int i=0;i<k;++i){
        curr_sum = curr_sum + arr[i];
    }
    int max_sum = curr_sum;
    for(int i=k;i<n;++i){
        curr_sum = curr_sum + arr[i] - arr[i-k];
        if(curr_sum==sum){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int sum;
    cin>>sum;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    cout<<ksumsubarray(arr,n,k,sum);

}



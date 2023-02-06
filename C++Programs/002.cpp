#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Iterative
int largestelem(int arr[], int n){
    int largest = INT_MIN;
    int maxi = 0;
    for(int i=0;i<n;++i){
        maxi = max(arr[i],largest);
    }
    return maxi;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    cout<<largestelem(arr,n)<<endl;
    return 0;
}